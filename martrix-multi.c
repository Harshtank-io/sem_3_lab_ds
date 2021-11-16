#include <stdio.h>
void main()
{
    int a[3][2], b[2][3], c[3][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d x %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d x %d : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
    }
}