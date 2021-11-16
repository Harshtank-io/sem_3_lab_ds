#include <stdio.h>
int factorial(int i)
{
    i = i * factorial(i - 1);
}
void main()
{
    int i;
    printf("Enter the number : ");
    scanf("%d", &i);
}