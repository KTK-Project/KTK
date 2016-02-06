#ifndef Event_Slash_h__
#define Event_Slash_h__


class Event_Slash : Event_Base {

private:
	Player* m_firstPlayer;
	Card* m_weapon;
	Player* m_goalPlayers;
	Card * m_armor;
	vector<Card*> m_slash;
	Slash_State m_slashState;
	bool m_needToAskPlayer;

public:
	Player* getM_firstPlayer();

	void setM_firstPlayer(Player* m_firstPlayer);

	Card* getM_weapon();

	void setM_weapon(Card* m_weapon);

	Player* getM_goalPlayers();

	void setM_goalPlayers(Player* m_goalPlayers);

	Card * getM_armor();

	void setM_armor(Card * m_armor);

	vector<Card*> getM_slash();

	void setM_slash(vector<Card*> m_slash);

	bool getM_needToAskPlayer();

	void setM_needToAskPlayer(bool m_needToAskPlayer);

	Slash_State getM_slashState();

	void setM_slashState(Slash_State m_slashState);

	void eventResolve();

	void weaponCheckBeforeSlash();

	void armorCheckBeforeSlash();

	void slashing();

	void slashSuccess();

	void slashFail();

	void hurting();

	void slashFinish();
};
#endif // Event_Slash_h__
