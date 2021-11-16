#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number : ");
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0 && i % 4 != 0)
        {
            printf("%d", i);
        }
    }
}