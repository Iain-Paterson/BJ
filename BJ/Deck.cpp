#include "Deck.h"



Deck::Deck(void)
{
	for (auto s = static_cast<int>(eSuit::spades); s <= static_cast<int>(eSuit::hearts); s++)
	{
		for (auto v = static_cast<int>(eVal::one); v <= static_cast<int>(eVal::king); v++)
		{
			mDeck.push_back(std::make_unique<Card>(static_cast<eSuit>( s) , static_cast<eVal>( v) ));

		}
	}

}

std::unique_ptr<Card> Deck::Deal( void )
{
	std::unique_ptr<Card> c = std::move (mDeck.back());
	mDeck.pop_back();

	return c;
}

