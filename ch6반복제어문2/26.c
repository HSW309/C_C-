#include <stdio.h>

int main() {
    int a = 0, b = 0, step = 1;
    scanf("%d %d", &a, &b);
    if(a > b) step = -1;
    for(int i = 1; i <= 9; i++){
        for(int j = a; ; j += step){
            printf("%d * %d = %2d", j, i, j * i);
            if(j == b) break;
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}
