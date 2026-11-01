#include <stdio.h>

int main() {
    int n = 0, sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &n);
        sum += n;
    }
    printf("sum : %d\navg : %.1f\n", sum, sum / 5.0);
    return 0;
}
