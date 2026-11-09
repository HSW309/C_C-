#include <stdio.h>

int main() {
    int a[10][10] = {0}, n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        a[i][0] = 1;
        a[i][i] = 1;
        for(int j = 1; j < i; j++){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            printf("%d%c", a[i][j], j == i ? '\n' : ' ');
        }
    }
    return 0;
}
