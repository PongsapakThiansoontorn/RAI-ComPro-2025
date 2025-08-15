#include <stdio.h>

int main() {
int marks[5];
int i, total=0, high=0;

for(i = 1; i<=5; i++) {
    printf("Enter marks for student %d: ", i);
    scanf("%d", &marks[i]);
    total += marks[i];
    if (marks[i] > high) {
            high= marks[i];
        }
}
printf("Total marks: %d\n", total);
printf("Highest marks: %d\n", high);



    return 0;
}