#include <stdio.h>
int main() {
   int numarray[8];
    int i, max = 0, min = 0;

    for (i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numarray[i]);
        
    }
    max = numarray[0];
    min = numarray[0];
    for (i = 1; i < 8; i++) {
        if( numarray[i] > max) {
            max = numarray[i];
        }
        if (numarray[i] < min) {
            min = numarray[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);



    return 0;
}