#include <stdio.h>

int main() {
    int n = 0, num = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * i; j++) printf(" ");
        for(int j = 0; j < n - i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
