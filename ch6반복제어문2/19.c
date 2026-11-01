#include <stdio.h>

int main() {
    int n = 0, sum = 0;
    scanf("%d", &n);
    for(int i = 5; i <= n; i += 5){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
