#include <stdio.h>

int main() {
    int n = 0, small = 0, large = 0;
    while(scanf("%d", &n) == 1){
        if(n < 50) small++;
        else large++;
        if(n >= 100) break;
    }
    printf("small : %d\nlarge : %d\n", small, large);
    return 0;
}
