#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    if (n == 1)
    {
        printf("You selected ADD.");
    }
    else if (n == 2)
    {
        printf("You selected EDIT.");
    }
    else if (n == 3)
    {
        printf("You selected DEL.");
    }
    else
    {
        printf("Wrong choice.");
    }
    return 0;
}