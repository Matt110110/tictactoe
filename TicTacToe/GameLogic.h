#pragma once
#include "Board.h"
#include "Player.h"
class GameLogic :
	public Board
{
public:
	GameLogic();
	bool isGameOver(Board b, Player p, int pos);
	~GameLogic();
};

