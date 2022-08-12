#ifndef _TICTAC_H
#define _TICTAC_H

#include <string>
#include<iostream>
#include<vector>
#include "Player.h"


class TicTac 
{
public:
	/**
	Constructor: this constructor takes no inputs and just represents the TicTac class in the main

	@param sets choice to false which will be modified to turn with conditions in the checkWin() function
	@return a blank playing board
	*/
	TicTac() : choice(false)
	{
		board();
	}
	/**
	This function returns the empty playing board in the form of a string vector, called in the constructor body

	@return the game board
	*/
	void board();
	/**
	This function returns a type bool for whether or not a player has won the round

	@return true if the conditions of a winner
	*/
	bool checkWin();
	/**
	This function returns a type bool for whether or not all the squares in on the board have been filled

	@return true if the conditions for draw have been met
	*/
	bool checkDraw();
	/**
	This function accepts the row and column of the player 1's choice on the board

	@return modified game board with the "x" representing player 1's move
	*/
	void getChoicep1(int row, int col);
	/**
	This function accepts the row and column of the player 2's choice on the board

	@return modified game board with the "o" representing player 2's move
	*/
	void getChoicep2(int row, int col);

private:
	//choice defined in private, set to false in the constructor, modified to true through the checkDraw and checkWin function
	bool choice;
	//empty game board vector
	std::vector<std::vector<std::string>> gameBoard = { {" "," "," "},{" "," "," "},{" "," "," "} };
};
#endif
