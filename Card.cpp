#include "Card.h"




const int Card::getValue()
{
	if (card == "J" || card == "Q" || card == "K") {
		return 10;
	}
	else if (card == "A") {
		return value;
	}
	else {
		int num = stoi(card);
		return num;
	}

}

void Card::setValue(int c)
{

	c = value;
}

