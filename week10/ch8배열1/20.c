#include <stdio.h>
#include <math.h>

int main() {
    int a[100], n = 0, num, count = 0;
    long long sum = 0;
    double avg = 0;

    while(n < 100 && scanf("%d", &num) == 1 && num != 0){
        a[n] = num;
        n++;
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 5 == 0){
            count++;
            sum += a[i];
        }
    }
    if(count > 0) avg = round((double)sum / count * 10) / 10.0;
    printf("Multiples of 5 : %d\nsum : %lld\navg : %.1f\n", count, sum, avg);
    return 0;
}
