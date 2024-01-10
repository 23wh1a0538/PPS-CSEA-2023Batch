#include <stdio.h>

#define MAX_PLAYERS 11
#define MAX_OVERS 50

struct Player {
    char name[50];
    int runsScored;
    // You can add more stats like balls faced, wickets taken, etc., here
};

struct ScoreSheet {
    int totalOvers;
    struct Player players[MAX_PLAYERS];
    // Add more variables if needed
};

void initializeScoreSheet(struct ScoreSheet *sheet) {
    sheet->totalOvers = MAX_OVERS;
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        printf("Enter player %d name: ", i + 1);
        scanf("%s", sheet->players[i].name);
        sheet->players[i].runsScored = 0;
        // Initialize other player stats if needed
    }
}

void displayScoreSheet(struct ScoreSheet sheet) {
    printf("\nScore Sheet\n");
    printf("Total Overs: %d\n", sheet.totalOvers);
    printf("Players:\n");
    for (int i = 0; i < MAX_PLAYERS; ++i) {
        printf("Player %d: %s\n", i + 1, sheet.players[i].name);
        printf("Runs Scored: %d\n", sheet.players[i].runsScored);
        // Display other player stats if needed
    }
}

int main() {
    struct ScoreSheet scoreSheet;
    initializeScoreSheet(&scoreSheet);
    displayScoreSheet(scoreSheet);

    return 0;
}

