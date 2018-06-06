#include "GameLogic.h"
#include "Board.h"
#include "Player.h"



GameLogic::GameLogic()
{
}

bool GameLogic::isGameOver(Board b, Player p, int pos)
{
	int x, y;
	switch (pos)
	{
	case 1:
		x = 0;
		y = 0;
		break;
	case 2:
		x = 0;
		y = 2;
		break;
	case 3:
		x = 0;
		y = 4;
		break;
	case 4:
		x = 2;
		y = 0;
		break;
	case 5:
		x = 2;
		y = 2;
		break;
	case 6:
		x = 2;
		y = 4;
		break;
	case 7:
		x = 4;
		y = 0;
		break;
	case 8:
		x = 4;
		y = 2;
		break;
	case 9:
		x = 4;
		y = 4;
		break;
	default:
		break;
	}
	for (int i = 0; i < 5; i += 2)
	{
		
	}
	return false;
}


GameLogic::~GameLogic()
{
}
