#include <stdio.h>
void main()
{
    int i, n, fact;
    printf("Enter the number : ");
    scanf("%d", &n);
    fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of the number %d is : %d", n, fact);
}