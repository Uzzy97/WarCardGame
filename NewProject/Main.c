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

// Declaring Methods
void gameSave();
int randomNum(int n);
void cardDraw();

// Declaring Global Variables
char *suits[4] = { "spades","clubs","diamonds","hearts" };
int ranks[13] = { 2,3,4,5,6,7,8,9,10,11,12,13,14 };

//Constants
#define ROUNDS 13

void main()
{
	// Declaring Variables
	int playerNumber = 0;
	Player listOfPlayers[10];

	// Introduction To Game - Heading
	printf("WELCOME TO THE ULTIMATE CARD GAME...WAR !\nARE YOU READY TO TAKE ON YOUR OPPONENTS...\n\n");

	// A Do - While Loop, Getting Number Of Players
	do {
		printf("Please Enter The Amount Of Players (Between 2 & 10): ");
		scanf_s("%d", &playerNumber);
		//Taking In Consideration Of The Amount Of Maximum Players
	} while (playerNumber < 1 || playerNumber > 14);

	// Calling The Method To Prompt User To Enter Name
	void enterPlayerName(int player, Player listOfPlayers[10]);
	enterPlayerName(playerNumber, listOfPlayers);

	// Starting the rounds using for loop
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
		if (exit == 'y' || exit == 'Y') {
			gameSave();
			roundNumber = 13;
		}
		else {
			roundNumber++;
			printf("\n\tNext round\n");
		}
	}
	printf("\n---GAME OVER---");
	printf("\n---ADD UP YOUR SCORES TO SEE WHO THE WINNERS ARE---");
	getch();
} // End Of Main 

// Method To Prompt User To Enter Name
void enterPlayerName(int player, Player listOfPlayers[10])
{
	int i = 0;
	for (i; i < player; i++)
	{
		char name[50];
		// Player & Player Number - Followed By First Name
		printf("Player (%d) Please Enter Your First Name: ", i + 1);
		scanf("%s", name);
	}
} // End Of enterPlayerName() Method

// Random Number Generator
int randomNum(int num)
{
	return rand() % num;
} // End Of randomNum() Method

// Method For Drawing Cards
void cardDraw()
{
	int r, s;
	// Random
	r = randomNum(13);
	s = randomNum(4);

	printf("\t\n\t%d of %s\n\n", ranks[r], suits[s]);
} // End Of cardDraw() Method

// Method For Saving Game
void gameSave()
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
		printf("You Have Exited The Game Without Saving !");
	}
} // End Of gameSave() Method












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








