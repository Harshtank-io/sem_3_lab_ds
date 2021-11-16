#include <stdio.h>
int main()
{
    int x;
    for (x = 97; x <= 122; x++)
    {
        printf("%c", (char)x); /*Explicit casting from int to char*/
    }
}