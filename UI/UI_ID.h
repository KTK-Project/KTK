#ifndef UI_ID_h__
#define UI_ID_h__


class UI_ID {

private:
	Sprite* m_markID;
	Node* m_IDList;

public:
	void init();

	void setMarkID(Char_ID ID);
};
#endif // UI_ID_h__
