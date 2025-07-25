#include <stdio.h>
int main(){
    char name[20];
    float pro,draw,phy;

    printf("enter your name: ");
    scanf("%[^/n]", name);
    printf("enter your programming sccore: ");
    scanf("%f", &pro);
    printf("enter your drawing score: ");
    scanf("%f", &draw);
    printf("enter your physics score: ");
    scanf("%f", &phy);

    float avg = (pro + draw + phy) / 3;

    printf("Name: %s\n", name);
    printf("AVG score: %.2f\n", avg);



    return 0;
}