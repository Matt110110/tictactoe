#pragma once
#include <string>
using namespace std;
class Board
{
	string _board[5][5] = {
		{ "_", "|", "_", "|", "_" },
		{ "-", "|", "-", "|", "-" },
		{ "_", "|", "_", "|", "_" },
		{ "-", "|", "-", "|", "-" },
		{ "_", "|", "_", "|", "_" }
	};
	int _filled[9] = { 0,0,0,0,0,0,0,0,0 };
	void _setFilled(int n);
public:
	Board();
	void printBoard();
	void setSymbol(string c, int pos);
	bool checkFilled(int pos);
	virtual ~Board();
};

