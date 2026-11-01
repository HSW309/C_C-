#include <stdio.h>

int main() {
    int n = 0, odd = 0, even = 0;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        if(n % 2 == 0) even++;
        else odd++;
    }
    printf("odd : %d\neven : %d\n", odd, even);
    return 0;
}
