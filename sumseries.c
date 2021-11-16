#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("%d\n", sum);
    
}