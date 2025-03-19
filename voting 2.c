#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATES 10
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int votes;
} Candidate;

void displayCandidates(Candidate candidates[], int candidateCount) {
    printf("Candidates:\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%d. %s\n", i + 1, candidates[i].name);
    }
}

int main() {
    Candidate candidates[MAX_CANDIDATES];
    int candidateCount = 0;
    int votes = 0;
    int choice;

    // Input candidates
    printf("Enter number of candidates (max %d): ", MAX_CANDIDATES);
    scanf("%d", &candidateCount);
    getchar();  // To consume newline

    for (int i = 0; i < candidateCount; i++) {
        printf("Enter name of candidate %d: ", i + 1);
        fgets(candidates[i].name, MAX_NAME_LENGTH, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = 0; // Remove newline
        candidates[i].votes = 0; // Initialize votes to 0
    }

    // Voting process
    printf("\nVoting has started! Enter your votes:\n");
    do {
        displayCandidates(candidates, candidateCount);
        printf("Enter the candidate number to vote (0 to finish voting): ");
        scanf("%d", &choice);

        if (choice > 0 && choice <= candidateCount) {
            candidates[choice - 1].votes++;
            votes++;
        } else if (choice != 0) {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    // Display results
    printf("\nVoting results:\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("%s received %d votes (%.2f%%)\n", candidates[i].name, candidates[i].votes,
               (votes > 0) ? (100.0 * candidates[i].votes / votes) : 0);
    }

    return 0;
}
