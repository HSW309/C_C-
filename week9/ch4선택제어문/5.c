#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n >= 80)
    {
        printf("Passed.");
    }
    else
    {
        printf("Failed.");
    }
    return 0;
}