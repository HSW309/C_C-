#include <stdio.h>

int main() {
    int n = 0, sum = 0, cnt = 0;
    double avg = 0;
    while(scanf("%d", &n) == 1){
        if(n < 0 || n > 100) break;
        sum += n;
        cnt++;
    }
    if(cnt > 0) avg = (double)sum / cnt;
    printf("sum : %d\navg : %.1f\n", sum, avg);
    return 0;
}
