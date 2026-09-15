#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);

    num3 = num2;

    while (num3 > 0)
    {
        printf("%d\n", num1 * (num3 % 10));
        num3 /= 10;
    };

    printf("%d\n", num1 * num2);
    
    return 0;
}