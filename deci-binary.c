// decimal to binary
#include <stdio.h>
int main()
{
    int a, arr[50], n = 0;
    float b, c;
    printf("please enter any decimal number: ");
    scanf("%f", &b);
    a = (int)b;
    b = b - a;
    for (int i = 0; a != 0; i++)
    {
        arr[i] = a % 2;
        a = a / 2;
        n++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf(".");
    while (b != 0)
    {
        c = b * 2;
        b = c - (int)c;
        printf("%d", c);
    }
    return 0;
}