#include <stdio.h>

int main () {
int numarray[10];

for (int i = 1; i <= 10; i++) {
    printf("Enter number %d: ", i);
    scanf("%d", &numarray[i]);
}

for (int i=1; i<10; i++){
printf("%d", numarray[i]);
if (i < 10) {
    printf(", ");
} else {
    printf("\n");


}

}





return 0;
}

hello my name i Benz nom sing