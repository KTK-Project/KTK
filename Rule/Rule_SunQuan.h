#ifndef Rule_SunQuan_h__
#define Rule_SunQuan_h__


class Rule_SunQuan : public Rule_Character {


public:
	void playCardStage();

	void afterProcessEvent(std::shared_ptr<Event_Base>& event);

	void zhiHeng();

	void jiuYuan(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_SunQuan_h__
