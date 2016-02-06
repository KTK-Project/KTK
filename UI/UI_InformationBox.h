#ifndef UI_InformationBox_h__
#define UI_InformationBox_h__


class UI_InformationBox {

private:
	vector<Label*> m_labels;
	Layout* m_layout;
	Sprite* m_background;

public:
	void init();

	void addLabel(std::string& information);

	void removeAll();
};
#endif // UI_InformationBox_h__
