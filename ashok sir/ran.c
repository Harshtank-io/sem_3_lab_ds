#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    a random();
}
int random()
{
    int num;
    srand(time(0));
    num = rand() % 10 + 1;
    printf("%d", num);
}