#include <stdio.h>

int main() {
    int n = 0, cnt = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        if(n % 2 == 0) cnt++;
    }
    printf("Even numbers = %d\n", cnt);
    return 0;
}
