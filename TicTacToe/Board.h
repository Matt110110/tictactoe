#pragma once
#include <string>
using namespace std;
class Board
{
	string _board[5][5] = {
		{ "   ", "|", "   ", "|", "   " },
		{ "---", "|", "---", "|", "---" },
		{ "   ", "|", "   ", "|", "   " },
		{ "---", "|", "---", "|", "---" },
		{ "   ", "|", "   ", "|", "   " }
	};
public:
	Board();
	void printBoard();
	virtual ~Board();
};

