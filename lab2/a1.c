#include <stdio.h>

int main() {
    int iv;
    float fv;
    char cv;

    printf("Enter an value: ");
    scanf("%d", &iv);
    printf("you entered:%d\n", iv);

    printf("Enter a float: ");
    scanf("%f", &fv);   
    printf("you entered:%.1f\n", fv);

    printf("Enter a character: ");
    scanf(" %c", &cv);  
    printf("you entered:%c\n", cv);

    return 0;
}
