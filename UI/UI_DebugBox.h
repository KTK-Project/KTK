#ifndef UI_DebugBox_h__
#define UI_DebugBox_h__


class UI_DebugBox {

private:
	ListView* m_listView;
	Label* m_scrollLabel;
	TextField* m_lineEdit;

public:
	bool init();
};
#endif // UI_DebugBox_h__
