#include "Board.h"
#include <iostream>
#include <string>
using namespace std;

Board::Board()
{
}

void Board::printBoard()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << _board[i][j];
		}
		cout << endl;
	}
}

void Board::setSymbol(string c, int pos)
{
	switch (pos)
	{
	case 1:
		_board[0][0] = c;
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	default:
		break;
	}
}


Board::~Board()
{
}
