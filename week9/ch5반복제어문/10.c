#include <stdio.h>

int main() {
    int n = 0;
    while(scanf("%d", &n) == 1){
        if(n == -1) break;
        if(n % 3 == 0) printf("%d\n", n / 3);
    }
    return 0;
}
