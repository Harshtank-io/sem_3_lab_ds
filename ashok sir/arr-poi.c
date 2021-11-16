// printing array using pointer
#include <stdio.h>
void main()
{
    int a[100];
    int *p, n;
    p = a;
    printf("Enter the limit : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("Enter the value of an array :  \n");
        scanf("%d", &p);
    }
    for (int i = 0; i <= a[i]; ++i)
    {
        printf("%d", *p);
        p++;
    }
}
