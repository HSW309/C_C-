#include <stdio.h>
#define SIZE 6

int main(void)
{
    int arr[SIZE] = {3, 6, 2, 5, 1, 4};
    int i, j, key;

    printf("정렬 전: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    // 삽입 정렬 알고리즘
    // i=1부터 시작. i번째 요소를 정렬된 0 ~ i-1 부분에 삽입
    for (i = 1; i < SIZE; i++)
    {
        key = arr[i]; // 현재 삽입될 숫자를 key 변수에 임시 저장

        // key를 정렬된 부분(arr[0]...arr[i-1])의 올바른 위치에 삽입
        // j는 정렬된 부분의 맨 끝에서부터 시작하여 왼쪽으로 이동
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j]; // key보다 큰 원소들을 오른쪽으로 한 칸씩 이동
        }
        arr[j + 1] = key; // 빈 자리에 key를 삽입
    }

    printf("정렬 후: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}