// Wishing Happy Holi in C Programming Language

#include <stdio.h>

int main()
{
    int i, j;

    // Upper half
    for (i = 1; i <= 18; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        if (i == 18)
        {
            printf("\t\t\tHAPPY HOLI\n");
        }
        else
        {
            printf("\t\t\tHappy Holi\n");
        }
    }

    // Lower half
    for (i = 17; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\t\t\tHappy Holi\n");
    }

    return 0;
}