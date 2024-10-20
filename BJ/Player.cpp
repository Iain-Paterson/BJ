#include "Player.h"



void Player::addCardtoHand(  std::unique_ptr<Card> iCard )
{
	mHand.push_back(std::move ( iCard) );
}

Player& Player::operator=(  std::unique_ptr<Card> iCard )
{
	addCardtoHand(std::move( iCard ));

	return *this;
}