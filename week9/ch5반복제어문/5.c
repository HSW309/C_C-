#include <stdio.h>

int main() {
    int n = 0;
    while(scanf("%d", &n) == 1){
        if(n < 0 || n > 100) break;
        if(n >= 80) printf("Pass\n");
        else printf("Fail\n");
    }
    return 0;
}
