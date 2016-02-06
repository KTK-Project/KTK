#ifndef Rule_LvBu_h__
#define Rule_LvBu_h__


class Rule_LvBu : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void wuShuang(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_LvBu_h__
