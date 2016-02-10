#include "UI_HandCardPanal.h"

UI_HandCardPage* UI_HandCardPanal::getPageByIndex(int index) {
	//断言（正常范围）
//返回UI_handcardPage *
	// TODO - implement UI_HandCardPanal::getPageByIndex
	throw "Not yet implemented";
}

int UI_HandCardPanal::getCurrentPageIndex() {
	//返回m_currentPageindex
	// TODO - implement UI_HandCardPanal::getCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::setCurrentPageIndex(int currentPageIndex) {
	//if(m_currentpage == currentpage) return;
//断言（正确的范围）
//旧页执行setvisible(false)
//新页执行setvisible(true)
//设置m_currentPageIndex
	// TODO - implement UI_HandCardPanal::setCurrentPageIndex
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageUp() {
	//断言（正确的范围）
//调用setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageUp
	throw "Not yet implemented";
}

void UI_HandCardPanal::pageDown() {
	//断言（正确的范围）
//调用setcurrentPageIndex
	// TODO - implement UI_HandCardPanal::pageDown
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(std::shared_ptr<Card> card) {
	//封装UI_Card *,压入addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::addCard(UI_Card* card) {
	//压入addcardqueue
	// TODO - implement UI_HandCardPanal::addCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(std::shared_ptr<Card> card) {
	//找到这个卡牌所在页，卡牌页.调用remove，然后return UI_Card *
//设置needToReset为true
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

UI_Card* UI_HandCardPanal::removeCard(UI_Card* card) {
	//找到这个卡牌所在页，卡牌页.调用remove，然后return UI_Card *
//设置needToReset为true
	// TODO - implement UI_HandCardPanal::removeCard
	throw "Not yet implemented";
}

void UI_HandCardPanal::removeEmptyPage() {
	//移除空的卡牌页，设置当前页为1
	// TODO - implement UI_HandCardPanal::removeEmptyPage
	throw "Not yet implemented";
}

void UI_HandCardPanal::reset() {
	//if(总页数只为1)
//{-----------------------------------------------------------------------
//getcurrentpage().settleup(true);
//}-----------------------------------------------------------------------
//else
//{-----------------------------------------------------------------------
//setcurrentpage(0);
//getcurrentpage().settleup(true);
//把所有第2页起removeAll，把所有卡牌压入一个容器中
//检查第一页还缺几个卡牌，调用addcard
//循环构建新卡牌页，压入这些卡牌并调用settleup(false)
//调用removeEmptypage
//}-----------------------------------------------------------------------
	// TODO - implement UI_HandCardPanal::reset
	throw "Not yet implemented";
}

void UI_HandCardPanal::for_each_card(std::function<void (UI_Card*)>& fun) {
	//遍历所有卡牌执行此函数。
	// TODO - implement UI_HandCardPanal::for_each_card
	throw "Not yet implemented";
}

void UI_HandCardPanal::update(float delta) {
	//if(needToReset) {调用reset()，设置needtoreset为false}
//---------------------------------------------------
//[[[[[[[[把增加的卡牌压入各个页中。
//static bool canAddCard = true
//if( !addCardQueue.empty() && canAddCard ) 
//{
//canaddcard = false;
//auto lastpage = m_pages.back();
//int left =  UI_handCardpage::s_maxsize - lastpage.getSize()
//if(!left)
//{
//创建新页，压入m_pages.
//lastpage = m_pages.back();
//left = UI_handCardpage::s_maxsize;
//}
//setcurrentpageindex(m_pages.size() - 1);
//int length = std::min(left, addcardqueue.size());
//for(int i = 0; i < length; i++)
//{
//lastpage.addcard(addcardueue.popfront());
//}
//lastpage.setaddcardcardfinishCallback([]()
// {
// canaddcard = true;
// });
//}
////把增加的卡牌压入各个页中。]]]]
//---------------------------------------------------
	// TODO - implement UI_HandCardPanal::update
	throw "Not yet implemented";
}

void UI_HandCardPanal::finish() {
	//善后处理：所有卡牌setuppding(false)，setdark(false)，
	// TODO - implement UI_HandCardPanal::finish
	throw "Not yet implemented";
}
