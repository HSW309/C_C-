#include <stdio.h>
#define LEN 5

int main(void)
{
    int s_list[LEN] = {5, 4, 1, 3, 2};
    int i, j, min_idx, temp;

    printf("정렬 전 배열: [ 5 4 1 3 2 ]\n\n");

    // 선택 정렬 알고리즘 (총 LEN-1 회전) / 마지막 숫자는 자동으로 정렬되기에 전체에서 -1 회전 하는것
    for (i = 0; i < LEN - 1; i++)
    {
        // 1. 현재 정렬할 위치(i)를 최솟값의 위치로 먼저 가정
        min_idx = i;

        // 2. 정렬되지 않은 나머지 부분(i+1 부터 끝까지)을 탐색
        for (j = i + 1; j < LEN; j++)
        {
            // 만약 더 작은 값을 발견하면,
            if (s_list[j] < s_list[min_idx])
            {
                min_idx = j; // 그 위치(인덱스)를 기억
            }
        }

        // 3. 찾은 최솟값(s_list[min_idx])과 현재 위치(s_list[i])의 값을 교환(Swap)
        temp = s_list[i];
        s_list[i] = s_list[min_idx];
        s_list[min_idx] = temp;

        // 매 회전 후 배열 상태 출력
        printf("[%d회전 후] ", i + 1);
        for (int k = 0; k < LEN; k++)
        {
            printf("%d ", s_list[k]);
        }
        printf("\n");
    }

    printf("\n정렬 후 배열: ");
    for (i = 0; i < LEN; i++)
        printf("%d ", s_list[i]);
    printf("\n");

    return 0;
}