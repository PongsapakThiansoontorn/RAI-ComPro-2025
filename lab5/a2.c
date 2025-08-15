#include <stdio.h>

int main(){
   int og[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int re[9];
    int i;

    for (i = 0; i < 9; i++) {
        re[i] = og[8 - i];
    }
    printf("Reversed array: ");
    for (i=0; i<9; i++) {
        printf("%d", re[i]);
        if (i < 8) {
            printf(", ");
        } else {
            printf("\n");
        }
    }







return 0;
}