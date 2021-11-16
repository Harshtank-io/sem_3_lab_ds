#include <stdio.h>
#define n 5

int top = -1;
int s[n];

void push(int x)
{
    if (top >= n)
    {
        printf("Stack overflow!\n");
        return;
    }
    top = top + 1;

    s[top] = x;
    return;
}
int pop()
{
    if (top == -1)
        printf("Stack is under flow !\n");

    top = top - 1;
    return s[top + 1];
}
int peep(int i)
{
    if (top - i + 1 <= -1)
        printf("Stack is under flow !\n");

    return s[top - i + 1];
}
void change(int i, int x)
{
    if (top - i + 1 <= -1)
    {
        printf("Stack is under flow !\n");
        return;
    }
    s[top - i + 1] = x;
    return;
}
void display()
{
    int k;
    if (top == -1)
    {
        printf("STACK underflow!\n");
        return;
    }

    for (k = top; k >= 0; k--)
    {
        printf("%d\n", s[k]);
    }

    return;
}

void main()
{
    int x, i;

    int ch;
    do
    {
        printf("1.push , 2.pop , 3.peep 4.change , 5.display  \n: ");
        printf("Enter the choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value to be push : ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            x = pop();
            if (x != 0)
            {
                printf("poped value is %d\n", x);
            }
            break;

        case 3:
            printf("Enter position which stcak u peep :");
            scanf("%d", &i);
            x = peep(i);
            if (x == 0)
            {
                printf("peeped value is %d\n", x);
            }
            break;

        case 4:
            printf("Enter position from top :");
            scanf("%d", &i);
            printf("Enter new value :");
            scanf("%d", &x);
            change(i, x);
            break;

        case 5:
            display();
            break;
        case 0:
            break;
        default:
            printf("Wrong choise try again\n");
            break;
        }
    } while (ch != 0);
}