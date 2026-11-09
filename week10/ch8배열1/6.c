#include <stdio.h>

int main() {
    int a[100], n = 0, num;

    while(n < 100 && scanf("%d", &num) == 1 && num != 0){
        a[n] = num;
        n++;
    }
    for(int i = n - 1; i >= 0; i--){
        printf("%d%c", a[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}
