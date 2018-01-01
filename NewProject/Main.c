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
 /*char gamesave() {
	printf("Would you like to save the game ?");
	scanf("%c", &save);

	getchar;
}*/

void saveGame(char fileName[15], int round, int totalPlayers, Player playersList[MAX_PALYERS],
	Card allPlayersCards[MAX_PALYERS][CARDS_PER_PLAYER]) {
	FILE* pFile;
	strcat(fileName, ".save"); // add extension ".save" to the end of the file
	pFile = fopen(fileName, "w");

	if (pFile == NULL) {
		printf("The file could not be opened\n");
	}
	else {
		// write to file:
		fprintf(pFile, "%d\n", round);
		fprintf(pFile, "%d\n", totalPlayers);
		

		// Player.id, Player.name, Player. points, ...
		for (int player = 0; player < totalPlayers; player++) {
			fprintf(pFile, "%d\t%s\t%d", playersList[player].id,
				playersList[player].name,
				playersList[player].points);
			// Cards
			for (int card = 0; card < CARDS_PER_PLAYER; card++) {
				fprintf(pFile, "\t%d", allPlayersCards[player][card].value);
			}
			fprintf(pFile, "\n");
		}
		fclose(pFile);
	}
}

