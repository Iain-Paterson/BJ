#pragma once
#include <iostream>

enum class eSuit : int
{ spades = 1 , clubs, diamonds, hearts } ;
enum class eVal : int 
{ one = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

class Card
{
public:
	Card(eSuit inSuit, eVal  inVal);
	~Card(void);

	friend std::ostream& operator<< (std::ostream& inOs, const Card& inCard);

private:
		eSuit mSuit;
		eVal  mVal;
};

