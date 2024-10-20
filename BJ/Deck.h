#pragma once

#include <memory>
#include <vector>
#include "Card.h"
class Deck
{
public:
	Deck(void);
	std::unique_ptr<Card> Deal( void );

private:

	std::vector<std::unique_ptr<Card>> mDeck;


};

