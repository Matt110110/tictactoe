#include <iostream>
#include <string>
#include <Windows.h>
#include "Player.h"
#include "Board.h"

using namespace std;

int logic(Player, Player);
void control();

int main()
{
	char choice;
	do
	{
		control();
		// Control part to repeat the program.
		cout << "\nDo you want to play again?(Y/n)\n";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	system("PAUSE");
	return 0;
}


/*
The main logic of the game. I think the control would be a better name. This method controls the flow of the game. Directing players to choose  their boxes. Runs for 9 iterations because in this version there can be a maximum of 9 boxes.
*/
int logic(Player p1, Player p2)
{
	Board b;
	int pos;
	string X(1, p1.getChar());
	string O(1, p2.getChar());
	b.printBoard();
	int stepCount = 0;
	while (stepCount < 10)
	{
		try
		{
			cout << endl << p1.getName() << " enter your box:(1-9) ";
			cin >> pos;
			if (pos > 9 || pos < 0)
				throw exception("Wrong input format");
			if (!b.checkFilled(pos))
			{
				string temp1(1, p1.getChar());
				b.setSymbol(temp1, pos);
				b.printBoard();
				stepCount++;
			}
			else
			{
				cout << "\nThat position is already taken. You lose.\n";
				Sleep(100);
				return 2;
			}
			if (b.isGameOver(pos, X))
			{
				return 1;
			}
			cout << endl << p2.getName() << " enter your box:(1-9) ";
			cin >> pos;
			if (pos > 9 || pos < 0)
				throw exception("Format error");
			if (!b.checkFilled(pos))
			{
				string temp2(1, p2.getChar());
				b.setSymbol(temp2, pos);
				b.printBoard();
				stepCount++;
			}
			else
			{
				cout << "\nThat position is already taken. You lose.\n";
				Sleep(100);
				return 1;
			}
			if (b.isGameOver(pos, O))
			{
				return 2;
			}
		}
		catch (const std::exception& e)
		{
			return 3;
		}
	}
	// Return statement for draw
	return 0;
}

/*
Controls the flow of the game.
*/
void control()
{
	system("cls");
	Player p1, p2;
	string name;
	char symbol;
	string str;
	cout << "\nEnter the name of Player 1: \n";
	cin >> name;
	p1.setName(name);
	cout << "\nEnter the character: (X/O)\n";
	cin >> symbol;
	p1.setCharacter(symbol);
	cout << "\nHello " << p1.getName() << ", your character is : " << p1.getChar() << endl;
	cout << "\nEnter the name of Player 2: \n";
	cin >> name;
	p2.setName(name);
	cout << "\nEnter the character: (X/O)\n";
	cin >> symbol;
	p2.setCharacter(symbol);
	cout << "\nHello " << p2.getName() << ", your character is : " << p2.getChar() << endl;
	Sleep(100);
	// Clear the screen
	system("cls");
	string sym(1, symbol);
	cout << "\nLet's start the match. Both players ready!\n";
	int winner = logic(p1, p2);
	// Clear the screen again
	system("cls");
	switch (winner)
	{
	case 1:
		cout << endl << p1.getName() << " won!\n";
		break;
	case 2:
		cout << endl << p2.getName() << " won!\n";
		break;
	case 0:
		cout << "\nIt was a tie.\n";
		break;
	case 3:
		cout << "\nThere was some error. Did you try to enter a character instead of a number?\n";
	default:
		break;
	}
}
