#include <stdio.h>
void main()
{
    float n, i, sum = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = 1 / (sum + i);
    }
    printf("%d\n", sum);
}