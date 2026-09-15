#include <stdio.h>

int main()
{
    int powerConsumed, costPerkW;
    printf("사용한 전력량(kW)을 입력하세요 ");
    scanf("%d", &powerConsumed);
    printf("전력 요금(1kW당 비용)을 입력하세요 ");
    scanf("%d", &costPerkW);
    long long total = (long long)powerConsumed * costPerkW;
    printf("전기 요금:%lld\n", total);
    return 0;
}
