#ifndef Rule_SiMaYi_h__
#define Rule_SiMaYi_h__


class Rule_SiMaYi : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void fanKui(std::shared_ptr<Event_Hurt>& event);

	void guiCai(std::shared_ptr<Event_Judge>& event);
};
#endif // Rule_SiMaYi_h__
