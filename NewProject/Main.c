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








/*char cards[4][13] = {

	{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
	{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
	{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },
	{ '0','1','2','3','4','5','6','7','8','9','10','11','12', },



};*/