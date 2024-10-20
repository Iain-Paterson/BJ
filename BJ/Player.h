#pragma once
#include <memory>
#include <vector>
#include "Card.h"

class Player
{
public:
	void addCardtoHand( const std::unique_ptr<Card> iCard );
	Player& operator=( std::unique_ptr<Card> iCard );

	//void FooFoo(std::unique_ptr<Card> a, std::unique_ptr<Card> b) { b = a; };

private:
	std::vector<std::unique_ptr<Card>> mHand;
};

