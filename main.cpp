#include<iostream>
#include<string>
#include "Player.h"
#include "TicTac.h"
using namespace std;

int main()
{
	//Output statement for tic tac toe game
	cout << "This is a Tic Tac Toe game!\n";
	//Declare an empty int variable for the amount of rounds set by user input
	int rounds;
	//Output statement requesting the amount of rounds for user input, then cin the amount of rounds
	cout << "How many rounds would you like to play? ";
	cin >> rounds;
	//Declare empty string names for each player which will be set through the user input
	string playerName1;
	string playerName2;
	//output statement for user input entering the names of each player
	//use cin.ignore(); since we used the cin >> function above, this will allow us to 
		//use the getline function without any name descrepancy
	cout << "Please enter the name of player 1: ";
	cin.ignore();
	getline(cin, playerName1);
	cout << "Thanks. Please enter the name of player 2: ";
	getline(cin, playerName2);
	cout << "Let the game begin!\n";
	//Call the player class, setting the first player entered to p1 and the second player entered to p2
	Player p1(playerName1);
	Player p2(playerName2);
	//Initialize the roundsPlayed variable to one (not zero since the least amount of rounds that can be entered by the user is 1)
	int roundsPlayed = 1;
	//While loop with condition that stops the loop once the amount of rounds the user inputted
		//have been played
	while (roundsPlayed <= rounds)
	{
		//Call the TicTac class to start a new round with a fresh game board. 
		//We call this inside the while loop to reset the game board after every round
		TicTac game;
		//while loop with condition that ends the loop once the round has been won, we will place break statements
			//below for the possiblity of a draw.
		while (game.checkWin() == false)
		{
			//This if statement is when the player's turns are equal, given that player 1 always starts the game,
				//this condition will call player 1's turn since each turn is zero. The turns will always be equal
				//when player 2 finishes the round
			if (p1.getTurn() == p2.getTurn())
			{
				//output statement declaring player 1's turn
				cout << "It's " << p1.getName() << "'s turn. \n";
				//call this function here that adds 1 to the players turn
				p1.whosTurn();
				//output input statements for the player's move 
				cout << "Where would you like to play? Enter your row position and column position: row col: ";
				int row; int col;
				cin >> row >> col;
				//Input player 1's decision into the getchoice1 function
				game.getChoicep1(row, col);
				//if else statement is placed here right after player 1's turn, if they win, add a point
					//to their score. If they finish the round with all squares filled (checkDraw), end the round with no winner
				if (game.checkWin() == true)
				{
					p1.addScore();
					cout << p1.getName() << " won the round!" << "\n";
					//This break statement ends the roudn
					break;
				}
				else if (game.checkDraw() == true)
				{
					cout << "This round was a draw. No points added.\n";
					//This break statement ends the round
					break;
				}
			}
			//The exact same methods for player 1's turn is repeated for player 2.
			//The only thing different is the first else if statement below. This will start the next round 
				//If player 1's turns are greater than player 2's turns. p2.whosTurn() will add 1 to player2's
				//turn, send the loop back to player 1's turn
			else if(p1.getTurn() > p2.getTurn())
			{
				cout << "It's " << p2.getName() << "'s turn. \n";
				p2.whosTurn();
				cout << "Where would you like to play? Enter your row position and column position: row col: ";
				int row; int col;
				cin >> row >> col;
				game.getChoicep2(row, col);
				if (game.checkWin() == true)
				{
					p2.addScore();
					cout << p2.getName() << " won the round!" << "\n";
					break;
				}
				else if (game.checkDraw() == true)
				{
					cout << "This round was a draw. No points added.\n";
					break;
				}
			}
		}
		//Cout statement stating the scores for each player, must call their name and score with the player class functions
		cout << "Presently, " << p1.getName() << " has " << p1.getScore() << " points and " << p2.getName() << " has " << p2.getScore() << " points.\n";
		roundsPlayed++;
	}
	//These if else statements are for the end-of-game statement. If player 1's score is higher,
		// state that player 1 won. IF player 2's score is higher, state that player 2 won. 
		//Once the total amount of rounds has bee reached the game loop will discontinue and the 
		//game will be over and move to this piece of code. 
	if (p1.getScore() > p2.getScore())
	{
		cout << p1.getName() << " has won the game!";
	}
	else if (p2.getScore() > p1.getScore())
	{
		cout << p2.getName() << " has won the game!";
	}
	else if (p1.getScore() == p2.getScore())
	{
		cout << "It is a draw!";
	}
	return 0;
}
			