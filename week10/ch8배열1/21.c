#include <stdio.h>

int main() {
    int a[100], n = 0, num;

    while(n < 100 && scanf("%d", &num) == 1 && num != 0){
        a[n] = num;
        n++;
    }
    printf("%d\n", n);
    for(int i = 0; i < n; i++){
        long long result;
        if(a[i] % 2 != 0) result = a[i] * 2LL;
        else result = a[i] / 2;
        printf("%lld%c", result, i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
