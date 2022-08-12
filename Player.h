#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>
#include<iostream>


class Player
{
public:
	/**
	Constructor: takes a single input of the player's name

	@param name, the player's name that was inputted
	@param score is set to zero when a name is entered
	@param turn is set to zero when a name is entered
	*/
	Player(std::string PlayerName) : name(PlayerName), score(0), turn(0) {}

	/**
	This function returns the the player's name in the form of a string

	@return the player's name
	*/

	std::string getName();

	/**
	This function returns the player's score of the game

	@return an int representing the score of the game
	*/
	int getScore();

	/**
	This function adds a point to the player's score, modifying the private member score

	@return the player's name
	*/
	void addScore();
	/**
	This function returns the int value of the amount of turns the players has had

	@return the player's name
	*/
	int getTurn();
	/**
	This function adds 1 to the number of turns the player has had, modifying the private member turn

	@return the player's name
	*/
	void whosTurn();


private:
	//string name, score and turn ints defined in the private and will be updated each turn, each point, each player
	std::string name;
	int score;
	int turn;
};

#endif