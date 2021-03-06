#include "GameDeck.h"

// Constructor
Deck::Deck()
{
	numOfCards = 0;
}

// Destructor
Deck::~Deck()
{
	cards.clear();
}

// Getters
std::vector<Card*> Deck::getCards()
{
	return cards;
}

int Deck::getNumOfCards()
{
	return cards.size();
}

// Setter
void Deck::setNumOfCards(int num)
{
	numOfCards = num;
}

// Others
void Deck::addCard(Card* aCard)
{
	this->cards.push_back(aCard);
}

void Deck::removeCard(Card* aCard)
{
	for (int i = 0; i < cards.size(); i++)
	{
		if (cards.at(i)->getTerritoryName() == aCard->getTerritoryName())
		{
			cards.erase(cards.begin() + i);
			break;
		}
	}
}