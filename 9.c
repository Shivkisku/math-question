
// You are going to visit your grandmother on Mother's day. 
// You want to give her two cakes. However, to get to her 
// house you must cross seven bridges. At each bridge is a 
// troll who demands ½ of all of your cakes as the price to 
// pass. However, this troll, being a nice troll, feels bad 
// and gives you back 1 of the cakes that he took.
// The puzzle to solve: How many cakes must you leave with to be able to give your grandmother 2 cakes

#include <stdio.h>

int main() {
    int cakes = 2; // Number of cakes you want to give to your grandmother
    int bridges = 7; // Number of bridges with trolls

    // Work backward from the grandmother to the starting point
    for (int i = 0; i < bridges; i++) {
        // After crossing a bridge, you need 2 cakes (1 for the troll, 1 for your grandmother)
        cakes = (cakes + 1) * 2;
    }

    printf("You need to start with %d cakes to give your grandmother 2 cakes.\n", cakes);

    return 0;
}
