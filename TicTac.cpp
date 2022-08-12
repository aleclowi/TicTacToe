#include <string>
#include<iostream>
#include<vector>
#include "Player.h"
#include "TicTac.h"

void TicTac::board()
{
	//first output the column numbers on its own line
	//identify on the string vector which spots of the array represent the row numbers, 
		//which spots represent blank spaces, and which spots have the bar | 
	std::cout << " 1 2 3" << "\n";
	std::cout << "1" << gameBoard[0][0] << "|" << gameBoard[0][1] << "|" << gameBoard[0][2] << "\n";
	std::cout << " -----" << "\n";
	std::cout << "2" << gameBoard[1][0] << "|" << gameBoard[1][1] << "|" << gameBoard[1][2] << "\n";
	std::cout << " -----" << "\n";
	std::cout << "3" << gameBoard[2][0] << "|" << gameBoard[2][1] << "|" << gameBoard[2][2] << "\n";
	//output statement for the lines underneath the board
	std::cout << " -----" << "\n";
}
bool TicTac::checkWin()
{
	//Use if else statements for all of the possibilities of a win on the 3x3 board.
		//if the specific spots are equal, then bool choice is set to true, ending the round
	//Specify that the spots that we are looking at are equal to each other, meaning that there
		//exists an x or an o there, but the spots also must NOT be blank
	if (gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2] && gameBoard[0][0] != " " && gameBoard[0][1] != " " && gameBoard[0][2] != " ")
	{
		choice = true;
		return choice;
	}
	else if (gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2] && gameBoard[1][0] != " " && gameBoard[1][1] != " " && gameBoard[1][2] != " ")
	{
		choice = true;
		return choice;
	}
	else if (gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2] && gameBoard[2][0] != " " && gameBoard[2][1] != " " && gameBoard[2][2] != " ")
	{
		choice = true;
		return choice;
	}
	else if (gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0] && gameBoard[0][0] != " " && gameBoard[1][0] != " " && gameBoard[2][0] != " ")
	{
		choice = true;
		return choice;
	}

	else if (gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1] && gameBoard[0][1] != " " && gameBoard[1][1] != " " && gameBoard[2][1] != " ")
	{
		choice = true;
		return choice;
	}

	else if (gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2] && gameBoard[0][2] != " " && gameBoard[1][2] != " " && gameBoard[2][2] != " ")
	{
		choice = true;
		return choice;
	}

	else if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2] && gameBoard[0][0] != " " && gameBoard[1][1] != " " && gameBoard[2][2] != " ")
	{
		choice = true;
		return choice;
	}
	else if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0] && gameBoard[0][2] != " " && gameBoard[1][1] != " " && gameBoard[2][0] != " ")
	{
		choice = true;
		return choice;
	}
}
bool TicTac::checkDraw()
{
	//Just use one if statement that specifies if all the spaces on the board are not empty, then
		//the round is over and bool choice becomes true
	if (gameBoard[0][0] != " " && gameBoard[0][1] != " " && gameBoard[0][2] != " " && gameBoard[1][0] != " " && gameBoard[1][1] != " " && gameBoard[1][2] != " " && gameBoard[2][0] != " " && gameBoard[2][1] != " " && gameBoard[2][2] != " ")
	{
		choice = true;
		return choice;
	}
}
void TicTac::getChoicep1(int row, int col)
{
	//This function places the "x" representing player 1's move on the board vector, then outputs the modified board
	gameBoard[row - 1][col - 1] = "x";
	board();
}
void TicTac::getChoicep2(int row, int col)
{
	//This function places the "o" representing player 2's move on the board vector, then outputs the modified board
	gameBoard[row - 1][col - 1] = "o";
	board();
}


