// array  replacing
#include <stdio.h>
void main()
{
    int i, c, b, n, j;
    int a[100], index[200];
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &a[i]);
    }
    printf("Enter the 2 Number : ");
    scanf("%d%d", &c, &b);
    for (i = 0; i < n; i++)
    {
        if (a[i] == c)
        {
            a[i] = b;
            printf("index of replace is : %d ", i);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
