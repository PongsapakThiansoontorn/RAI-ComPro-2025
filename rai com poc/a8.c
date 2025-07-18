#include <stdio.h>

int main()
{
    printf("+----------------+--------+--------+$\n");
    printf("|%-16s|%8s|%8s|$\n" ,"Name","score1","score2");
    printf("+----------------+--------+--------+$\n");
    printf("|%-16s|%8d|%8d|$\n","Alice", 85, 90);
    printf("|%-16s|%8d|%8d|$\n","bob", 78, 82);
    printf("|%-16s|%8d|%8d|$\n","Charlie", 92, 88);
    printf("+----------------+--------+--------+$\n");
    return 0;
}