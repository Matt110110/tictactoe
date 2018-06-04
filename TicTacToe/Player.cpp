#include "Player.h"
#include <string>
using namespace std;


Player::Player()
{
}

void Player::setName(string name)
{
	_name = name;
}

string Player::getName()
{
	return _name;
}

void Player::setCharacter(char c)
{
	_symbol = c;
}

char Player::getChar()
{
	return _symbol;
}


Player::~Player()
{
}
