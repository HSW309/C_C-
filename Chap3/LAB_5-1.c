#include <stdio.h>

int main()
{

    int year;
    printf("[ 윤년 체크 ] 연도를 입력해주세용 (숫자만) : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("[ 윤년 체크 ] 윤년입니다!");
    }
    else
    {
        printf("[ 윤년 체크 ] 윤년이 아닙니다.");
    }
}
