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
		_board[0][0] = c;
		break;
	case 2:
		_board[0][2] = c;
		break;
	case 3:
		_board[0][4] = c;
		break;
	case 4:
		_board[2][0] = c;
		break;
	case 5:
		_board[2][2] = c;
		break;
	case 6:
		_board[2][4] = c;
		break;
	case 7:
		_board[4][0] = c;
		break;
	case 8:
		_board[4][2] = c;
		break;
	case 9:
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

void Board::setFilledX(int pos)
{
	_filledX[pos - 1] = 1;
}

void Board::setFilledY(int pos)
{
	_filledY[pos - 1] = 1;
}

int * Board::getFilledX()
{
	return _filledX;
}

int * Board::getFilledY()
{
	return _filledY;
}

int* Board::whatFilled()
{
	return _filled;
}

bool Board::isGameOver(int pos, string str)
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

	if (x == 0)
	{
		if (x == y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[x][2] == str) && (_board[x][4] == str))
				return true;
		}
		if ((_board[x][0] == str) && (_board[x][4] == str) && (_board[x][2] == str))
			return true;
		if ((_board[2][y] == str) && (_board[4][y] == str) && (_board[0][y] == str))
			return true;
	}
	if (x == 2)
	{
		if (x == y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[x][0] == str) && (_board[x][4] == str))
				return true;
		}
		if ((_board[x][0] == str) && (_board[x][4] == str) && (_board[x][2] == str))
			return true;
		if ((_board[2][y] == str) && (_board[4][y] == str) && (_board[0][y] == str))
			return true;
	}
	if (x == 4)
	{
		if (x == y)
		{
			if ((_board[0][0] == str) && (_board[2][2] == str) && (_board[4][4] == str))
				return true;
			if ((_board[x][2] == str) && (_board[x][4] == str))
				return true;
		}
		if ((_board[x][0] == str) && (_board[x][4] == str) && (_board[x][2] == str))
			return true;
		if ((_board[2][y] == str) && (_board[4][y] == str) && (_board[0][y] == str))
			return true;
	}

	//// Check for the row
	//for (int i = 0; i < 5; i += 2)
	//{
	//	if (_board[x][i] != str)
	//		return false;
	//	if (i == 4)
	//	{
	//		return true;
	//	}
	//}

	//// Check for the column
	//for (int i = 0; i < 5; i += 2)
	//{
	//	if (_board[i][y] != str)
	//		return false;
	//	if (i == 4)
	//		return true;
	//}

	//// Check for anti-diagonal
	//if (x + y == 4)
	//{
	//	for (int i = 0; i < 5; i += 2)
	//	{
	//		if (_board[i][4 - i] != str)
	//			return false;
	//		if (i == 4)
	//			return true;
	//	}
	//}

	//// Check for diagonal
	//if (x == y)
	//{
	//	for (int i = 0; i < 5; i += 2)
	//	{
	//		if (_board[i][i] != str)
	//			return false;
	//		if (i == 4)
	//			return true;
	//	}
	//}
	return false;

}


Board::~Board()
{
}
