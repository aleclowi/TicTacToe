#include <string>
#include <iostream>
#include "Player.h"

std::string Player::getName()
{
	//return player's name for this function
	return name;
}
int Player::getScore()
{
	//return player's best score for this function
	return score;
}
void Player::addScore()
{
	//add 1 to the score each time this function is called
	score++;
}

int Player::getTurn()
{
	//return the player's amount of turns
	return turn;
}
void Player::whosTurn()
{
	//add 1 to the amount of turns the player has taken
	turn++;
}


