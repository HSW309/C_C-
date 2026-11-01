#include <stdio.h>

int main() {
    int n = 0, score = 0, sum = 0;
    double avg = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &score);
        sum += score;
    }
    if(n > 0) avg = (double)sum / n;
    printf("avg : %.1f\n", avg);
    if(avg >= 80) printf("pass\n");
    else printf("fail\n");
    return 0;
}
