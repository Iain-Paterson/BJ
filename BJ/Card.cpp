#include "Card.h"




Card::Card(eSuit inSuit, eVal  inVal) :
	mSuit(inSuit),
	mVal(inVal)
{
	std::cout << "Constructing card: " << static_cast<int> (mVal) << " " << static_cast<int> (mSuit) << "\n";
}
Card::~Card(void)
{
	std::cout << "Destructing card: " <<  static_cast<int>(mVal) << " " << static_cast<int>(mSuit) << "\n";
}

std::ostream& operator<< (std::ostream& inOs, const Card& inCard)
{
	return inOs;
}