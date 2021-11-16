// factorial using recursion
#include <stdio.h>
int factorial();
void main()
{
    int n;
    printf("Enter the number the Number : ");
    scanf("%d", &n);
    printf("the factorial of the number %d is : %d", n, factorial(n));
}
int factorial(int n)
{
    if (n >= 1)
        return n * factorial(n - 1);
    else
        return 1;
}