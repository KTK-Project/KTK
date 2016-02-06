#ifndef Card_Slash_h__
#define Card_Slash_h__


class Card_Slash : Card_Basic {

public:
	bool s_usedOnce;

	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);

	void eventCallBack(std::shared_ptr<Event_Base>& event);
};
#endif // Card_Slash_h__
