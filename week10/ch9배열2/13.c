#include <stdio.h>

int main() {
    int a[5][5] = {0};

    for(int i = 0; i < 5; i++){
        a[i][0] = 1;
        a[i][i] = 1;
        for(int j = 1; j < i; j++){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            printf("%d%c", a[i][j], j == i ? '\n' : ' ');
        }
    }
    return 0;
}
