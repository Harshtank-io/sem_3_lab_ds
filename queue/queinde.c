#include <stdio.h>
#define n 10
int f = 0, r = 0;
int q[n];

void queue_insert(int y)
{
    if (r >= n)
        printf("queue Overflow!!\n");

    r += r;
    q[r] = y;

    if (f == 0)
        f = 1;
    return;
}

int queue_delete()
{
    int d;
    if (f ==
        0)
    {
        printf("Queue Underflow !! ");
        return 0;
    }
    d = q[f];

    if (f == r)
    {
        f = r;
        r = 0;
    }
    else
        f = f + 1;
    return d;
}
int main()
{
    int y, i, ch;
    do
    {
        printf("Enter the choice \n");
        printf("1.Insert\n2.Delete\n3.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element : \n");
            scanf("%d", &y);
            queue_insert(y);
            break;

        case 2:
            i = queue_delete();
            printf("%d is deleted \n", i);
            break;

        case 3:
            return 0;
            break;
        }
    } while (ch != 0);
}