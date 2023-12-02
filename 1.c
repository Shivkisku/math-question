// Let N be the set of natural numbers and R be the relation in N defined as
// R = {(a, b) : a = b – 2, b > 6}. Then
// (A) (2, 4) ∈ R 

#include <stdio.h>

int main() {
    // Define the pair (a, b)
    int a = 2;
    int b = 4;

    // Check the conditions for the relation R
    if (a == b - 2 && b > 6) {
        printf("(%d, %d) belongs to the relation R\n", a, b);
    } else {
        printf("(%d, %d) does not belong to the relation R\n", a, b);
    }

    return 0;
}
