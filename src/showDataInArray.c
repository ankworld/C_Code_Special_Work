#include <stdio.h>

int main () {

    int numArray[5];
    int i;

    // Input data to Array
    for (i = 0; i < 5; i++) {
        scanf("%d", &numArray[i]);
    }

    //showData In array
    for (i = 0; i < 5; i++) {
        printf("%d%d ", i,numArray[i]);
    }

}
