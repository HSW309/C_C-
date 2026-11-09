#include <stdio.h>

int main() {
    int a[100], n = 0, num;

    while(n < 100 && scanf("%d", &num) == 1 && num != 0){
        a[n] = num;
        n++;
    }
    if(n == 0) return 0;
    int max = a[0], min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("%lld\n", (long long)max - min);
    return 0;
}
