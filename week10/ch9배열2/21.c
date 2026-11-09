#include <stdio.h>

int main() {
    int a[4][2];
    long long column[2] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
            column[j] += a[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        long long sum = (long long)a[i][0] + a[i][1];
        printf("%lld%c", sum / 2, i == 3 ? '\n' : ' ');
    }
    printf("%lld %lld\n", column[0] / 4, column[1] / 4);
    printf("%lld\n", (column[0] + column[1]) / 8);
    return 0;
}
