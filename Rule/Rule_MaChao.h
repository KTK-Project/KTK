#ifndef Rule_MaChao_h__
#define Rule_MaChao_h__


class Rule_MaChao : public Rule_Character {


public:
	int getDistance(Player* player);

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void tieQi(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_MaChao_h__
