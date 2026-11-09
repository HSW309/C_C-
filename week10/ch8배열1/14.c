#include <stdio.h>

int main() {
    int a[10];
    long long odd = 0, even = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i += 2){
        odd += a[i];
        even += a[i + 1];
    }
    printf("sum : %lld\navg : %.1f\n", even, odd / 5.0);
    return 0;
}
