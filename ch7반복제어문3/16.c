#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2 * (n - i); j++) printf(" ");
        for(int j = 1; j <= i; j++){
            printf("%d", j);
            if(j < i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
