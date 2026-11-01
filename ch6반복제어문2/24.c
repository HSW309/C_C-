#include <stdio.h>

int main() {
    int row = 0, col = 0;
    scanf("%d %d", &row, &col);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("%d", i * j);
            if(j < col) printf("   ");
        }
        printf("\n");
    }
    return 0;
}
