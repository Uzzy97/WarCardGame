/*
Procedural Programming Project: WAR
Student Name: Usman Sattar
Student ID: G00345816
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h> 

// Struct Arrays
typedef struct Player
{
	char playerName[50];
	int playerID;
	int playerPoints;
}Player;

// Declaring Methods
void saveGame();
int randomNumber(int num);
void cardDraw();

// Declaring Global Variables
char *suits[4] = { "Spades","Clubs","Diamonds","Hearts" };
int ranks[13] = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };

// Constants
#define ROUNDS 13

// Starting Of Main Method
void main()
{
	// Declaring Variables
	int playerNumber = 0;
	Player listOfPlayers[10];

	// Introduction To Game - Heading
	printf("WELCOME TO THE ULTIMATE CARD GAME...WAR !\nARE YOU READY TO TAKE ON YOUR OPPONENTS...\n\n");

	// A Do - While Loop, Getting Number Of Players Involved In The Game
	do {
		printf("Please Enter The Amount Of Players (Between 2 & 10): ");
		// Asking User Above Question
		scanf("%d", &playerNumber);
		//Taking In Consideration Of The Amount Of Maximum Players, Which Is 10
	} while (playerNumber < 1 || playerNumber > 14);

	// Calling The Method To Prompt User To Enter Name, Maximum Player Per Game Are 10
	void playerName(int player, Player listOfPlayers[10]);
	playerName(playerNumber, listOfPlayers);

	// Starting The Rounds Using For Loop
	int roundNumber = 1;
	//Rounds Go Up To And Including 13
	for (roundNumber; roundNumber <= ROUNDS;)
	{
		char exit;
		// Round Number
		printf("****************************************************************************************");
		printf("\n\n\tRound %d\n", roundNumber);
		// Random Cards Are Drawn By Each Player
		int j = 0;
		for (j; j < playerNumber; j++)
		{
			cardDraw();
		}
		// Exiting Round
		printf("\nSelect (n/N) For Next Round, Or Select (y/Y) To Save Game And Exit (Y = Yes || N = No)");
		scanf("%s", &exit);

		// If 'Y'||'y' Is Chosen, Then Game Is Saved And Exited
		if (exit == 'y' || exit == 'Y')
		{
			saveGame();
			roundNumber = 13;
		}
		else
		{
			roundNumber++;
			printf("\n\tNext round\n");
		}
	} // End Of For Loop

	// Prompting Users That Game Is Over
	printf("\n---GAME OVER---");
	// Prompting Users To Add Up Scores
	printf("\n---ADD UP YOUR SCORES TO SEE WHO THE WINNERS ARE---");
	printf("\n---PLAYER WITH MAXIMUM POINTS WIN THE GAME---");
	// Scoreboard - So Player Knows Where They Are Standing
	printf("\n\nSCOREBOARD:");
	printf("\n2 - 10: are equal from 2 to 10 points");
	printf("\nJ (Jack) = 11 points");
	printf("\nQ (Queen) = 12 points");
	printf("\nK (King) = 13 points");
	printf("\nA (Ace) = 14 points");
	// Congratulations To The Winner
	printf("\n\n---CONGRATULATIONS TO THE WINNER OF THE GAME---");
	
	// Makes Program Runnable Till End
	getch();
} // End Of Main 

// Method To Prompt User To Enter Name
void playerName(int player, Player listOfPlayers[10])
{
	int i = 0;
	for (i; i < player; i++)
	{
		char name[50];
		// Player & Player Number - Followed By First Name
		printf("Player (%d) Please Enter Your First Name: ", i + 1);
		// Asking Players To Enter Their First Name
		scanf("%s", name);
	}
} // End Of playerName() Method

// Random Number Generator
int randomNumber(int num)
{
	return rand() % num;
} // End Of randomNumber() Method

// Method For Drawing Cards
void cardDraw()
{
	int r, s;
	// Random
	r = randomNumber(13);
	s = randomNumber(4);

	printf("\t\n\t%d of %s\n\n", ranks[r], suits[s]);
} // End Of cardDraw() Method

// Method For Saving Game
void saveGame()
{
	char save;
	printf("\nWould You Like To Save And Exit The Game? (Y = Yes || N = No)");
	scanf("%s", &save);
	if (save == 'y' || save == 'Y')
	{
		printf("Your Game Has Been Saved :) ");
	}

	// If n/N Is Chosen, Then Game Is Not Saved
	else if (save == 'n' || save == 'N')
	{
		printf("Your Game Has Been Not Been Saved \n\nYou Have Exited The Game Without Saving !");
	}
	else
	{
		printf("You Have Now Exited The Game Without Saving !");
	}
} // End Of saveGame() Method