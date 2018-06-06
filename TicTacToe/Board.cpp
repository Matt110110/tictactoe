#include "Board.h"
#include <iostream>
#include <string>
using namespace std;

void Board::_setFilled(int n)
{
	_filled[n] = 1;
}

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
	_setFilled(pos - 1);
	switch (pos)
	{
	case 1:
		_x = 0;
		_y = 0;
		_board[0][0] = c;
		break;
	case 2:
		_x = 0;
		_y = 2;
		_board[0][2] = c;
		break;
	case 3:
		_x = 0;
		_y = 4;
		_board[0][4] = c;
		break;
	case 4:
		_x = 2;
		_y = 0;
		_board[2][0] = c;
		break;
	case 5:
		_x = 2;
		_y = 2;
		_board[2][2] = c;
		break;
	case 6:
		_x = 2;
		_y = 4;
		_board[2][4] = c;
		break;
	case 7:
		_x = 4;
		_y = 0;
		_board[4][0] = c;
		break;
	case 8:
		_x = 4;
		_y = 2;
		_board[4][2] = c;
		break;
	case 9:
		_x = 4;
		_y = 4;
		_board[4][4] = c;
		break;
	default:
		break;
	}
}

bool Board::checkFilled(int pos)
{
	if (_filled[pos - 1] == 1)
	{
		return true;
	}
	return false;
}

bool Board::allFilled()
{
	int count = 0;
	for (int i = 0; i < 9; i++)
	{
		if (_filled[i] == 1)
			count++;
	}
	if (count == 9)
		return true;
	else
		return false;
}

bool Board::isGameOver(int pos, string str)
{
	/*
	It maynot be pretty or intelligent or space saving, but it's my algorithm so I am proud. 
	*/
	if (_x == 0)
	{
		if (_x == _y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[_x][2] == str) && (_board[_x][4] == str))
				return true;
		}
		if ((_board[_x][0] == str) && (_board[_x][4] == str) && (_board[_x][2] == str))
			return true;
		if ((_board[2][_y] == str) && (_board[4][_y] == str) && (_board[0][_y] == str))
			return true;
	}
	if (_x == 2)
	{
		if (_x == _y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[_x][0] == str) && (_board[_x][4] == str))
				return true;
		}
		if ((_board[_x][0] == str) && (_board[_x][4] == str) && (_board[_x][2] == str))
			return true;
		if ((_board[2][_y] == str) && (_board[4][_y] == str) && (_board[0][_y] == str))
			return true;
	}
	if (_x == 4)
	{
		if (_x == _y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[_x][2] == str) && (_board[_x][4] == str))
				return true;
		}
		if ((_board[_x][0] == str) && (_board[_x][4] == str) && (_board[_x][2] == str))
			return true;
		if ((_board[2][_y] == str) && (_board[4][_y] == str) && (_board[0][_y] == str))
			return true;
	}
	return false;

}


Board::~Board()
{
}
