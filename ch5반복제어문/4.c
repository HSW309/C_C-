#include <stdio.h>

int main() {
    int n = 0, i = 1, sum = 0;
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
