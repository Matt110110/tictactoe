#include <iostream>
#include <string>
#include "Player.h"
#include "Board.h"

using namespace std;

int logic(Player, Player);
void control();
bool isGameOver();

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
	for (int i = 0; i < 9; i++)
	{
		b.printBoard();
			cout << endl << p1.getName() << " enter your box:(1-9) ";
			cin >> pos;
			if (!b.checkFilled(pos))
			{
				string temp1(1, p1.getChar());
				b.setSymbol(temp1, pos);
				b.printBoard();
			}
			else
			{
				cout << "\nThat position is already taken. You lose.\n";
				return 2;
			}
			if (isGameOver())
			{
				return 1;
			}
			cout << endl << p2.getName() << " enter your box:(1-9) ";
			cin >> pos;
			if (!b.checkFilled(pos))
			{
				string temp2(1, p2.getChar());
				b.setSymbol(temp2, pos);
				b.printBoard();
			}
			else
			{
				cout << "\nThat position is already taken. You lose.\n";
				return 1;
			}
			if (isGameOver())
			{
				return 2;
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
	Player p1, p2;
	string name;
	char symbol;
	string str;
	string space(" ");
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
	case 3:
		cout << "\nIt was a tie.\n";
		break;
	default:
		break;
	}
}

/*
Function to check whether the match is over or not.
Checks if someone won the game or for stalemate.
The second reason is hard to implement.
*/
bool isGameOver()
{
	// Default response
	return false;
}
