
#include <stdio.h>
#include <process.h>
#include <stdlib.h>

#define MAX 5
void push();
void display();
int s[MAX];
int top = -1, x = 0, n;
void main()
{

    int ch;
    while (1) //infinite loop, will end when choice will be 4
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;

        default:
            printf("\nWrong Choice!!");
        }
    }
}

// push algo //
void push()
{
    if (top > n)
    {
        printf("stack overflow");
    }
    else
    {
        printf("Enter the value to push : ");
        scanf("%d", &x);
        top += top;
        s[top] = x;
    }
}
// dispaly of stack //
void display()
{
    if (top == -1)
    {
        printf("stack overflow");
    }
    else
    {
        printf("\n stack is \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d", s[i]);
        }
    }
}
