# TicTacToe

A tic-tac-toe game using command prompt.

## Constraints:
* There are two players playing on a 3X3 grid
* Each player gets to choose their own symbols (X/O)
* The first player to get three of their symbols horizontally, vertically or diagonally wins
* At the end of the game there should be a prompt to repeat the game or exit

## Change log
1. The visuals of the game are complete.
2. Players can be defined and select their box position.
3. Selected position gets updated with the player symbol.
4. In case player selects an already filled box he instantly loses.
5. Dual printing bug and looping bug fixed completely.
6. Game logic completed. Game can decide who won and lost.

## TODO:
* ~Define the actual logic of the program, to test whether the game is over or not and check if someone won or it's a stalemate.~
* ~Remove the dual printing bug for player two.~
* Improve the algorithm to check whether the game will end up in a tie or not.
* Add a single player mode with AI.
* Use enums to lock down the symbols to X or O. Right now anything goes.
* Catch exceptions when char is entered instead of number
* Less harsh approach to entering an already filled box. Right now it results in loss.