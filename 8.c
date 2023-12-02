

// How many letters of the word FAINTS, will
// their order in the word and that when the letters
// are arranged in the alphabetical order, remain the same?

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "FAINTS";
    int length = strlen(word);
    int count = 0;

    // Create a copy of the word to sort alphabetically
    char sortedWord[length + 1];
    strcpy(sortedWord, word);
    // Sort the copy alphabetically
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (sortedWord[i] > sortedWord[j]) {
                // Swap characters if they are out of order
                char temp = sortedWord[i];
                sortedWord[i] = sortedWord[j];
                sortedWord[j] = temp;
            }
        }
    }

    // Compare the original order with the alphabetical order
    for (int i = 0; i < length; i++) {
        if (word[i] == sortedWord[i]) {
            count++;
        }
    }

    printf("Number of letters whose order remains the same: %d\n", count);

    return 0;
}
