#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("swap is : %d %d ", *x, *y);
}
void main()
{
    int a, b;
    printf("Enter the two Number : ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
}