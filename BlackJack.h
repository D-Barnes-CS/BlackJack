#pragma once
#include "Card.h"



class BlackJack {
private:
	Card card;
	vector<Card> deck;
	vector<Card> hand;
public:
	vector<Card> Start(vector<Card> deck);
	vector<Card> Deal(vector<Card> deck);
	void Safe(string input);
	void setDeck(Card cards[], vector<Card> deck);
};;