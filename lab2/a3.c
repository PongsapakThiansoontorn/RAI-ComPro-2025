#include <stdio.h>

int main() {
    char name[25], 
    gender[25],
    education[25]; 
         
    int age;
    float height;
    int weight;

    printf("Enter your name: ");
    scanf("%[^\n]", &name);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Enter your gender: ");
    scanf("%s", &gender);

    printf("Enter your education: ");
    scanf("%s", &education);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);  
    printf("Height: %.2f\n", height);
    printf("Weight: %d\n", weight); 
    printf("gender: %s\n", gender);
    printf("Education: %s\n", education);
    
    return 0;
}
    
    