#include <stdio.h>

int main()
{
    int one = 0;
    int two = 0;

    scanf("%d", &one);
    scanf("%d", &two);

    if (one >= 4)
    {
        if (two >= 4)
        {
            printf("WIN.");
        }
        else
        {
            printf("DRAW.");
        }
    }
    else if (two >= 4)
    {
        printf("DRAW.");
    }
    else
    {
        printf("LOSE.");
    }
    return 0;
}