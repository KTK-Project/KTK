#ifndef UI_LogBox_h__
#define UI_LogBox_h__


class UI_LogBox {

private:
	ListView* m_listView;
	CheckBox* m_scrollCheckBox;
	Label* m_scrollLabel;

public:
	bool init();

	void addLog(std::string& log);
};
#endif // UI_LogBox_h__
