#include "UI_GuanXing.h"

bool UI_GuanXing::initWithCards(const std::vector<std::shared_ptr<Card>> & topCards) {
	//创建一个图片，和两个label
//把数组元素封装为uI_card复制到topcard
//对每一个UI_card *设置事件处理，按下的时候跟着移动，放下的时候计算到各个点的距离，设置动作，
//并于动作结束时，继续接受触摸事件
	// TODO - implement UI_GuanXing::initWithCards
	throw "Not yet implemented";
}

std::vector<UI_Card*> & UI_GuanXing::getTopCards() {
	// TODO - implement UI_GuanXing::getTopCards
	throw "Not yet implemented";
}

std::vector<UI_Card*> & UI_GuanXing::getBottonCards() {
	// TODO - implement UI_GuanXing::getBottonCards
	throw "Not yet implemented";
}
