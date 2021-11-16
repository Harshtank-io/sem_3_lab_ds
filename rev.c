#include <stdio.h>
void main()
{
    int a[50];
    int n, i;
    printf("Enter the limit :");
    scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Enter the value : ");
            scanf("%d", &a[i]);
        }
    printf("reversing the array:)\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}