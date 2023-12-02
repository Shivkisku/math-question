// If A is substituted by 4, B by 3, C by 2, D by 4, E by 3,
// F by 2 and so on, then what will be total of the numerical
// values of the letters of the word SICK?

#include <stdio.h>

int main() {
    char word[] = "SICK";
    int total = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        // Check if the letter is even or odd and assign the corresponding value
        int value = (word[i] - 'A' + 1) % 2 == 0 ? 4 : 3;
        
        // Accumulate the total
        total += value;
    }

    printf("The total of the numerical values of the letters in the word 'SICK' is: %d\n", total);

    return 0;
}
