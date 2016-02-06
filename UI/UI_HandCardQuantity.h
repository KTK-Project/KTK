#ifndef UI_HandCardQuantity_h__
#define UI_HandCardQuantity_h__


class UI_HandCardQuantity {

private:
	Sprite* m_quantityBackground;
	Label* m_quantity;

public:
	void init();

	void refresh();
};
#endif // UI_HandCardQuantity_h__
