#include <stdio.h>
void main()
{
    int a[100];
    int max, min, avg, i, n, sum = 0, count = 0;
    printf("Enter the limit : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value : ");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / n;
    printf("the avreage of an array is : %d\n", avg);
    for (i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            printf("%d\n", a[i]);
            count++;
        }
    }
    printf("count = %d\n", count);
}