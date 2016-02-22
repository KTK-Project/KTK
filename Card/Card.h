#ifndef Card_h__
#define Card_h__

#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"

class Player;

class Card {
public:
	Card(ECardName name, ECardSuit suit, int number);
	ECardName getName() const;
	ECardType getType() const;
	ECardSuit getSuit() const;
	ECardColor getColor() const;
	int getNumber() const;

	virtual int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	virtual std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;
	virtual void onUpping() const;
	virtual void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;

	virtual ~Card() = 0 { };

protected:
	void setType(ECardType type);

private:
	ECardName m_name;
	ECardColor m_color;
	ECardSuit m_suit;
	ECardType m_type;
	int m_number;
};
#endif // Card_h__
