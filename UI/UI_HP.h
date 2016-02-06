#ifndef UI_HP_h__
#define UI_HP_h__


class UI_HP {

private:
	vector<Sprite*> m_bloods;
	vector<Sprite*> m_emptyBloods;

public:
	void init();

	void refresh();
};
#endif // UI_HP_h__
