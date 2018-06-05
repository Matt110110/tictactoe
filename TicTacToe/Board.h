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
public:
	Board();
	void printBoard();
	void setSymbol(string c, int pos);
	bool checkFilled(int pos);
	bool allFilled();
	virtual ~Board();
};

