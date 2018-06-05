#include <iostream>
#include <string>
#include <sstream>
#include "Player.h"
#include "Board.h"

using namespace std;

int main()
{
	char choice;
	do
	{
		Player p1, p2;
		Board b;
		string name;
		stringstream ss;
		char symbol;
		string str;
		string space(" ");
		//char *x = &symbol;
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
		cout << "\nLet's start the match. Both players ready!\n";
		ss << space;
		ss << symbol;
		ss << space;
		ss >> str;
		b.setSymbol(str, 1);
		b.printBoard();
		// Control part to repeat the program.
		cout << "\nDo you want to play again?(Y/n)\n";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	system("PAUSE");
	return 0;
}