#ifndef Rule_XiaHouDun_h__
#define Rule_XiaHouDun_h__


class Rule_XiaHouDun : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void gangLie(std::shared_ptr<Event_Hurt>& event);
};
#endif // Rule_XiaHouDun_h__
