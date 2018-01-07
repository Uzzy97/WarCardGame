#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//Struct Arrays
typedef struct Player
{
	char playerName[50];
	int playerID;
	int playerPoints;
}Player;

// Declaring methods
void gameSave();
int randomNum(int n);
void cardDraw();

// Declare Global Variables
char *suits[4] = { "spades","clubs","diamonds","hearts" };
int ranks[13] = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };

void main()
{
	// Declare Variables
	int playerNumber = 0;
	Player listOfPlayers[10];
	int ROUNDS = 13;

	// Introduction To Game - Heading
	printf("WELCOME TO THE ULTIMATE CARD GAME...WAR !\nARE YOU READY TO TAKE ON YOUR OPPONENTS...\n\n");

	// Input for the amount of players
	do {
		printf("Please Enter The Amount Of Players (Between 2 & 10): ");
		scanf_s("%d", &playerNumber);
	} while (playerNumber < 1 || playerNumber > 14);

	void enterNames(int player, Player listOfPlayers[10]);
	enterNames(playerNumber, listOfPlayers);

	// Starting the rounds using for loop
	for (int roundNum = 1; roundNum < ROUNDS;)
	{
		char exit;
		// Round Number
		printf("\n\n\tRound %d\n", roundNum);
		//Random cards drawn by players
		for (int j = 0; j < playerNumber; j++)
		{
			cardDraw();
		}
		// Exiting Round
		printf("\nSelect (n/N) For Next Round, Or Select (y/Y) To Save Game And Exit (Y = Yes || N = No)");
		scanf_s("%s", &exit);

		if (exit == 'y' || exit == 'Y') {
			gameSave();
			roundNum = 13;
		}
		else {
			roundNum++;
			printf("\n\tNext round\n");
		}
	}
	printf("\n---Game over---");
}

void enterNames(int player, Player listOfPlayers[10])
{
	int i = 0;
	for (i; i < player; i++)
	{
		char name[50];
		printf("Player (%d) Please Enter Your First Name: ", i + 1);
		scanf("%s", name);
		Player pl;
		pl.playerID = i;
		pl.playerPoints = 0;
		listOfPlayers[i] = pl;
	}
}

// gameSave method
void gameSave() {
	char save;
	printf("\nWould You Like To Save And Exit The Game? (Y = Yes || N = No)");
	sscanf_s("%s", &save);
	if (save == 'y' || save == 'Y')
	{
		printf("Your Game Has Been Saved :) ");
	}

	else if (save == 'n' || save == 'N')
	{
		printf("Your Game Has Been Not Been Saved \n\nYou Have Exited The Game Without Saving !");
	}
	else
	{
		printf("You Have Exited The Game Without Saving !");
	}
}

// cardDraw method
void cardDraw() {
	int r, s;

	r = randomNum(13);
	s = randomNum(4);

	printf("\t\n\t%d of %s\n\n", ranks[r], suits[s]);

}

// randomNum method
int randomNum(int num)
{
	return rand() % num;
}












/*




#include <stdio.h>
// Main
void GameSave();

// Variables
int playerNumber = 0;
int rounds = 13;
char exit, save;

#define CARDS_IN_DECK 13
void main() {



// Input of amount of players
do {
printf("Please Enter The Amount Of Players (Between 2 & 10)\n");
scanf("%d", &playerNumber);
} while (playerNumber < 1 || playerNumber > 14);

// Rounds Track
for (int roundNumber = 1; roundNumber <= rounds; ) {
printf("Would you like to exit your current round ? (Y = Yes || N = No) \n");
scanf("%s", &exit);
if (exit = 'y' || 'Y')
GameSave();
else {
roundNumber++;
}
}
}
// Getting user to save the game
void GameSave() {
char save;
printf("Would you like to save the game ?\n");
scanf("%s", &save);


}

typedef struct Card {
char name[5];
int value;
} Card;

void createNewDeck(Card newDeck[4][CARDS_IN_DECK])
{


Card cards[4][CARDS_IN_DECK] = {
{
{ "2", 2 },{ "3", 3 },{ "4", 4 },{ "5", 5 },{ "6", 6 },{ "7", 7 },{ "8", 8 },{ "9", 9 },
{ "10", 10 },{ "J", 11 },{ "Q", 12 },{ "K", 13 },{ "A", 14 }
},
{
{ "2", 2 },{ "3", 3 },{ "4", 4 },{ "5", 5 },{ "6", 6 },{ "7", 7 },{ "8", 8 },{ "9", 9 },
{ "10", 10 },{ "J", 11 },{ "Q", 12 },{ "K", 13 },{ "A", 14 }
},
{
{ "2", 2 },{ "3", 3 },{ "4", 4 },{ "5", 5 },{ "6", 6 },{ "7", 7 },{ "8", 8 },{ "9", 9 },
{ "10", 10 },{ "J", 11 },{ "Q", 12 },{ "K", 13 },{ "A", 14 }
},
{
{ "2", 2 },{ "3", 3 },{ "4", 4 },{ "5", 5 },{ "6", 6 },{ "7", 7 },{ "8", 8 },{ "9", 9 },
{ "10", 10 },{ "J", 11 },{ "Q", 12 },{ "K", 13 },{ "A", 14 }
}
};
}
//void createNewDeck(Card newDeck[4][CARDS_IN_DECK]);




*/



/*char cards[4][13] = {

{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },



};*/








