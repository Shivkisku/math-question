

// Which number multiplied by itself will give the 
// output as 12345678987654321 ?

#include <stdio.h>
#include <math.h>

int main() {
    long long int givenNumber = 12345678987654321LL;

    double squareRootResult = sqrt((double)givenNumber);

    printf("The number multiplied by itself to get %lld is %.0f\n", givenNumber, squareRootResult);

    return 0;
}


