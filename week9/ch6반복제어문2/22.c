#include <stdio.h>

int main() {
    int a = 0, b = 0, temp = 0, sum = 0, cnt = 0;
    double avg = 0;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
            cnt++;
        }
    }
    if(cnt > 0) avg = (double)sum / cnt;
    printf("sum : %d\navg : %.1f\n", sum, avg);
    return 0;
}
