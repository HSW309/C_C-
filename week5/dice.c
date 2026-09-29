#include <stdio.h>

int main()
{
    int arr[6] = {0};

    for (int i = 0; i < 10; i++)
    {

        int num = 0;
        scanf("%d\n", &num);
        arr[num - 1] += 1;
    }
    //    for (int j = 0; j < 7; j++)
    //    {
    //        printf("%d ", arr[j]);
    //    }

    for (int k = 0; k < 6; k++)
    {
        printf("%d : %d\n", k + 1, arr[k]);
    }
}