#include <stdio.h>
void main()
{
    int a[100];
    int max, min, avg, i, n, sum = 0;
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
    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
        max = a[i] > max ? a[i] : max;
    }

    for (i = 1; i < n; i++)
    {
        min = a[i] < min ? a[i] : min;
    }
    printf("max of an array is : %d\n", max);
    printf("min of an array is : %d\n", min);
}