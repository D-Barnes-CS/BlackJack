#include "BlackJack.h"

vector<Card> BlackJack::Start(vector<Card> house)
{
	for (int j = 0; j <= 1; j++) {
		int dealt = rand() % house.size() + 1;
		vector<Card>().push_back(house[dealt]);
		deck.pop_back();
	}
		return vector<Card>();
}

vector<Card> BlackJack::Deal(vector<Card> house)
{
	for (int j = 0; j < 1; j++) {
		int dealt = rand() % house.size() + 1;
		vector<Card>().push_back(house[dealt]);
		deck.pop_back();
	}
	return vector<Card>();
}

void BlackJack::Safe(string input)
{
	int percentage = 0, sum = 0, count = 0;
	for (int i = 0; i < hand.size(); i++) {
		sum = hand[i].getValue();
	}
	for (int i = 0; i < deck.size(); i++) {
		if (deck[i].getValue() + sum > 21) {
			count++;
		}
		else {
			percentage++;
		}
	}
	if (input == "d" || input == "D") {
		cout << "You have a " << count << " out of " << deck.size() << " chance of busting over 21." << endl;
	}
	else if (input == "B" || input == "b") {
		cout << "You have a " << count << " out of " << deck.size() << " chance of winning." << endl;
	}
	}

void BlackJack::setDeck(Card cards[], vector<Card> deck)
{
		for (int i = 0; i < cards->size(); i++) {
		deck.push_back(cards[i]);
	}
}
	
	
