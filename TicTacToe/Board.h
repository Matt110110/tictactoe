#pragma once
#include <string>
using namespace std;
class Board
{
	string _board[5][5] = {
		{ " ", "|", " ", "|", " " },
		{ "-", "|", "-", "|", "-" },
		{ " ", "|", " ", "|", " " },
		{ "-", "|", "-", "|", "-" },
		{ " ", "|", " ", "|", " " }
	};
	int _filled[9] = { 0,0,0,0,0,0,0,0,0 };
	void _setFilled(int n);
	int _filledX[9] = { 0,0,0,0,0,0,0,0,0 };
	int _filledY[9] = { 0,0,0,0,0,0,0,0,0 };
public:
	Board();
	void printBoard();
	void setSymbol(string c, int pos);
	bool checkFilled(int pos);
	bool allFilled();
	void setFilledX(int pos);
	void setFilledY(int pos);
	int * getFilledX();
	int * getFilledY();
	int * whatFilled();
	bool isGameOver(int pos, string str);
	virtual ~Board();
};

