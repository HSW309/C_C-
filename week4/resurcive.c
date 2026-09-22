#include <stdio.h>

int recursive(int num)
{
    if (num == 0)
    {
        return 0;
    }
    recursive(num - 1);
    printf("%d\n", num);
}

int main()
{
    int num;
    scanf("%d", &num);
    recursive(num);
    return 0;
}