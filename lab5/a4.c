#include <stdio.h>
int main() {
 int values[10];
    int even = 0, odd = 0, i;
 for (i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &values[i]);
        if (values[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);





    return 0;
}