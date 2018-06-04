#include <iostream>

using namespace std;

int main()
{
	char choice;
	do
	{
		// Control part to repeat the program.
		cout << "\nDo you want to play again?(Y/n)\n";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	system("PAUSE");
	return 0;
}