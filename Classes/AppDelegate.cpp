#include "platform/CCPlatformConfig.h"
#include "AppDelegate.h"
#include "Main/GameSence.h"
#include "Main/AppMacros.h"
#include "Manager/TextManager.h"
#include <vector>
#include <string>
#include "base/CCConsole.h"

USING_NS_CC;
using std::vector;
using std::string;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate()
{
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
	//set OpenGL context attributions,now can only set six attributions:
	//red,green,blue,alpha,depth,stencil
	GLContextAttrs glContextAttrs = { 8, 8, 8, 8, 24, 8 };

	GLView::setGLContextAttrs(glContextAttrs);
}

bool AppDelegate::applicationDidFinishLaunching() {
	// initialize director
	auto director = Director::getInstance();
	auto glview = director->getOpenGLView();
	if (!glview) {
		glview = GLViewImpl::create(TextManager::gbkToUtf8("Èý¹úÉ±"));
		glview->setFrameSize(1280, 720);
		director->setOpenGLView(glview);
	}

	director->setOpenGLView(glview);

	// Set the design resolution
	glview->setDesignResolutionSize(1280, 720, ResolutionPolicy::EXACT_FIT);

	Size frameSize = glview->getFrameSize();

	vector<string> searchPath;
	searchPath.push_back(mediumResource.directory);
	director->setContentScaleFactor(MIN(mediumResource.size.height / designResolutionSize.height, mediumResource.size.width / designResolutionSize.width));
	FileUtils::getInstance()->setSearchPaths(searchPath);

	// turn on display FPS
	director->setDisplayStats(false);

	// set FPS. the default value is 1.0/60 if you don't call this
	director->setAnimationInterval(1.0 / 60);

	auto log = FileUtils::getInstance()->getSearchPaths();

	// create a scene. it's an autorelease object
	auto scene = GameSence::scene();

	// run
	director->runWithScene(scene);

	return true;

}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
	Director::getInstance()->stopAnimation();

	// if you use SimpleAudioEngine, it must be pause
	// SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
	Director::getInstance()->startAnimation();

	// if you use SimpleAudioEngine, it must resume here
	// SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
