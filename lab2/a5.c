
#include <stdio.h>
int main(){
    char fname[50],uni[20],lname[50];
    int age;
    float height;
    printf("enter your name: ");
    scanf("%s", fname);
    scanf("%s", lname);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("enter your height: ");
    scanf("%f", &height);
    printf("enter your university: ");
    scanf("%s", uni);

    printf("\nHi! Everyone. This is k.%s from %s i am %d years old and my height is %.1f ", fname, uni, age, height);
}