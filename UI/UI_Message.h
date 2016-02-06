#ifndef UI_Message_h__
#define UI_Message_h__


class UI_Message {

private:
	Label* m_message;
	Button* m_button1;
	Button* m_button2;
	std::function<bool ()> m_button1ValidCheck;
	std::function<bool ()> m_button2ValidCheck;

public:
	void setString(std::string& string);

	void setVisible(bool visible);

	void update(float delta);

	void setM_button1ValidCheck(std::function<bool ()> m_button1ValidCheck);

	void setM_button2ValidCheck(std::function<bool ()> m_button2ValidCheck);

	void setM_button1CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button1CallBack);

	void setM_button2CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button2CallBack);
};
#endif // UI_Message_h__
