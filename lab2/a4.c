#include <stdio.h>

int main() {
   char name[25];
   int id[10];
   float pro , phy , cal;
   
   printf("Enter your name: ");
   scanf("%[^\n]", name);

   printf("Enter your ID: ");
   scanf("%d", id);

   printf("Enter your Programming marks: ");
    scanf("%f", &pro);

    printf("Enter your Physics marks: ");
    scanf("%f", &phy);

    printf("Enter your Calculus marks: ");
    scanf("%f", &cal);
    float total = (pro + phy + cal)/3;

    printf("Hi! %s (%d)! your GPA is %.2f", name, id, total);

    return 0;
}