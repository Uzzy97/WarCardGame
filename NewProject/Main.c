#include <stdio.h>
// Main

// Variables
int playerNumber = 0;
int rounds = 13;
char exit, save;
void main() {

	

	// Input of amount of players
	do {
		printf("Please Enter The Amount Of Players (Between 2 & 10)\n");
		scanf("%d", &playerNumber);
	} while (playerNumber < 1 || playerNumber > 14);
	
	// Rounds Track
	for (int roundNumber = 1; roundNumber <= rounds; ) {
		printf("Would you like to exit your current round ?");
		scanf("%c", &exit);
		if (exit = 'y' || 'Y')
			gamesave();
		else {
			roundNumber++;
		}
	}	
}
// Getting user to save the game
void gamesave() {
	printf("Would you like to save the game ?");
	scanf("%c", &save);
}