#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using std::cout; using std::cin; using std::endl;
using std::string; using std::stoi;
using std::vector;
class Card
{

private:
	string card;
	int value;
public:
	const static int numOfCards = 13;
	const int getValue();
	void setValue(int card);
	//Card(vector<Card> cards);
};

