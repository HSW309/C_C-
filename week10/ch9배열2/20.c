#include <stdio.h>

int main() {
    int a[5][5] = {{1, 0, 1, 0, 1}};

    for(int i = 1; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j > 0) a[i][j] += a[i - 1][j - 1];
            if(j < 4) a[i][j] += a[i - 1][j + 1];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d%c", a[i][j], j == 4 ? '\n' : ' ');
        }
    }
    return 0;
}
