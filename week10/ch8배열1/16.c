#include <stdio.h>

int main() {
    int a[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("%lld\n", (long long)a[0] + a[2] + a[4]);
    return 0;
}
