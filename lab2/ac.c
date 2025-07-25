#include <stdio.h>
int main() {
    int a, b, c;
    int min, max, sum;
    float avg;

    printf("Enter interger 1: ");
    scanf("%d", &a);
    printf("Enter interger 2: ");
    scanf("%d", &b);
    printf("Enter interger 3: ");
    scanf("%d", &c);

    sum = a + b + c;
    avg = sum / 3.0;
    min = a;
    if (b < min) 
        min = b;
    if (c < min) 
        min = c;

    max = a;
    if (b > max) max=b;
    if (c > max) max=c;

    printf("results:\n");
    printf("minimum: %d\n", min);
    printf("maximum: %d\n", max);
    printf("sum: %d\n", sum);
    printf("average: %.2f\n", avg);
    


    

    return 0;
}