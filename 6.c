// Two Fathers and Two Sons Riddle

// Two fathers and two sons sat down to eat eggs 
// for breakfast. They ate exactly three eggs, each 
// person had an egg. The riddle is for you to explain how

#include <stdio.h>

int main() {
    // Representing the generations
    int grandfather = 1; // 1 represents having an egg
    int father = 1;      // 1 represents having an egg
    int son = 1;         // 1 represents having an egg

    // Printing the initial state
    printf("Initial state:\n");
    printf("Grandfather has %d egg(s)\n", grandfather);
    printf("Father has %d egg(s)\n", father);
    printf("Son has %d egg(s)\n", son);

    // Eating eggs
    grandfather -= 1;
    father -= 1;
    son -= 1;

    // Printing the final state
    printf("\nAfter eating eggs:\n");
    printf("Grandfather has %d egg(s)\n", grandfather);
    printf("Father has %d egg(s)\n", father);
    printf("Son has %d egg(s)\n", son);

    return 0;
}
