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
		_board[0][1] = c;
		break;
	case 3:
		_board[0][2] = c;
		break;
	case 4:
		_board[1][0] = c;
		break;
	case 5:
		_board[1][1] = c;
		break;
	case 6:
		_board[1][2] = c;
		break;
	case 7:
		_board[2][0] = c;
		break;
	case 8:
		_board[2][1] = c;
		break;
	case 9:
		_board[2][2] = c;
		break;
	default:
		break;
	}
}


Board::~Board()
{
}
