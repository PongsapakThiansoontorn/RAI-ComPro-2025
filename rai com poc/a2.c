#include <stdio.h>

int main() {
    char name[50] = "benz";
    int age = 99;
    float height = 160.5;

    printf("My name is %s\n", name);
    printf("I am %d years old.\n", age);
    printf("I am %.1f cm tall\n", height);

    return 0;
}