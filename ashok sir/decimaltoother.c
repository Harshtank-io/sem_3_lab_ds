#include <stdio.h>
int d2b(float b)
{
    int a, arr[50], n = 0, d;
    float c;
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
    if (b != 0)
    {
        printf(".");
        while (b != 0)
        {
            c = b * 2;
            b = c - (int)c;
            d = (int)c;
            printf("%d", d);
        }
    }
}
int d2o(float o)
{
    int a, arr[50], n = 0, d;
    float c;
    a = (int)o;
    o = o - a;
    for (int i = 0; a != 0; i++)
    {
        arr[i] = a % 8;
        a = a / 8;
        n++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    if (o != 0)
    {
        printf(".");
        while (o != 0)
        {
            c = o * 8;
            o = c - (int)c;
            d = (int)c;
            printf("%d", d);
        }
    }
}
int main()
{
    float b, o;
    int num;
    printf("please enter what operation you waant to perform: \n");
    printf("1. decimal to binary\n");
    printf("2. decimal to octal\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("please enter any decimal number: ");
        scanf("%f", &b);
        d2b(b);
        break;
    case 2:
        printf("please enter any decimal number: ");
        scanf("%f", &o);
        d2o(o);
        break;
    }
    return 0;
}