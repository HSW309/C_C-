#include <stdio.h>

int main() {
    int n = 0;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        if(n > 0) printf("positive number\n");
        else printf("negative number\n");
    }
    return 0;
}
