#ifndef UI_Position_h__
#define UI_Position_h__


class UI_Position {

private:
	Sprite* m_positionBackground;
	Label* m_label;

public:
	void init();

	void refresh();
};
#endif // UI_Position_h__
