#include "UI_HandCardPage.h"

bool UI_HandCardPage::init() {
//	Todo:stm
	return true;
}

std::vector<UI_Card*> & UI_HandCardPage::getCards() const {
	//返回m_cards的引用
	// TODO - implement UI_HandCardPage::getCards
	throw "Not yet implemented";
}

int UI_HandCardPage::getSize() const {
	// TODO - implement UI_HandCardPage::getSize
	throw "Not yet implemented";
}

bool UI_HandCardPage::isEmpty() const {
	// TODO - implement UI_HandCardPage::isEmpty
	throw "Not yet implemented";
}

bool UI_HandCardPage::isFull() const {
	// TODO - implement UI_HandCardPage::isFull
	throw "Not yet implemented";
}

void UI_HandCardPage::settleUp(bool useAction) {
	//if(使用动作)
//[
//m_cards的元素都给予一个moveto动作，用getPositionWithIndex获取位置。
//动作
//}
//else
//{
//所有卡牌设置正确的位置。
//}
	// TODO - implement UI_HandCardPage::settleUp
	throw "Not yet implemented";
}

cocos2d::Vec2 UI_HandCardPage::getPositionWithIndex(int index) const {
	//根据index获取一个合理的位置并返回
	// TODO - implement UI_HandCardPage::getPositionWithIndex
	throw "Not yet implemented";
}

bool UI_HandCardPage::hasCard(const std::shared_ptr<Card> & card) const {
	// TODO - implement UI_HandCardPage::hasCard
	throw "Not yet implemented";
}

bool UI_HandCardPage::hasCard(const UI_Card * card) const {
	// TODO - implement UI_HandCardPage::hasCard
	throw "Not yet implemented";
}

void UI_HandCardPage::addCard(const std::shared_ptr<Card> & card) const {
	//断言（!isfull）
//封装为UI_Card *，调用addcard(const UI_card *)
	// TODO - implement UI_HandCardPage::addCard
	throw "Not yet implemented";
}

void UI_HandCardPage::addCard(const UI_Card * card) const {
	//断言（!isfull）
//static int 计数器 = 0;
//pushback到m_cards
//检查自身是否是visible
//若是：
//给予一个压入的动作(增加计数器，移动动作，减少计数器，检查是否减为0为0调用addcardfinishcallback)
//若否：
//调用settleup
	// TODO - implement UI_HandCardPage::addCard
	throw "Not yet implemented";
}

UI_Card * UI_HandCardPage::removeCard(const std::shared_ptr<Card> & card) const {
	//断言（hascard（卡牌））
//在m_cards中删除这个卡牌指针并返回UI_card*
	// TODO - implement UI_HandCardPage::removeCard
	throw "Not yet implemented";
}

UI_Card * UI_HandCardPage::removeCard(const UI_Card * card) const {
	//断言（hascard（卡牌））
//在m_cards中删除这个卡牌指针并返回UI_card*
	// TODO - implement UI_HandCardPage::removeCard
	throw "Not yet implemented";
}

std::vector<UI_Card*> UI_HandCardPage::removeAll() const {
	//把m_cards的元素移动到新vec并返回
	// TODO - implement UI_HandCardPage::removeAll
	throw "Not yet implemented";
}

void UI_HandCardPage::setAddCardFinishCallBack(const std::function<void ()> & m_addCardFinishCallBack) {
	// TODO - implement UI_HandCardPage::setAddCardFinishCallBack
	throw "Not yet implemented";
}
