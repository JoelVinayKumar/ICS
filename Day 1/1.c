#include <stdio.h>

int main(void)
{
    int c, d;
    d = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            while ((d = getchar()) == ' ');
            putchar(c);
            putchar(d);
        } else {
            putchar(c);
        }
    }
}