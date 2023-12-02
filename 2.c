// A number of cats got together and decided to kill 
// between them 999919 rats. Every cat killed an equal 
// number of rats. Each cat killed more rats than there 
// were cats. How many rats do you think that each cat 
// killed ?

#include <stdio.h>

int main() {
    int totalRats = 999919;

    for (int C = 1; C <= totalRats; C++) {
        if (totalRats % C == 0) {
            int R = totalRats / C;

            if (R > C) {
                printf("Each cat killed %d rats, and there were %d cats.\n", R, C);
                break;
            }
        }
    }

    return 0;
}
