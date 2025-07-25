#include <stdio.h>

int main() {
    int minT;
    printf("Enter total minutes: ");
    scanf("%d", &minT);
   int hours = minT / 60;
   int minutes = minT % 60;
    printf("Total time is %d hours and %d minutes\n", hours, minutes);

return 0;
}
