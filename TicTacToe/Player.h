#pragma once
#include <string>
using namespace std;
class Player
{
	string _name;
	char _symbol;
public:
	Player();
	void setName(string name);
	string getName();
	void setCharacter(char c);
	char getChar();
	~Player();
};

