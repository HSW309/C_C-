#include <stdio.h>

int main() {
    int a[100], n = 0, num;

    while(n < 100 && scanf("%d", &num) == 1 && num != 0){
        a[n] = num;
        n++;
    }
    for(int i = 1; i < n; i += 2){
        printf("%d%c", a[i], i + 2 >= n ? '\n' : ' ');
    }
    return 0;
}
