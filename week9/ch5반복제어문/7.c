#include <stdio.h>

int main() {
    int n = 0, cnt = 0, sum = 0;
    double avg = 0;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        cnt++;
        sum += n;
    }
    if(cnt > 0) avg = (double)sum / cnt;
    printf("cnt = %d\nsum = %d\navg = %.2f\n", cnt, sum, avg);
    return 0;
}
