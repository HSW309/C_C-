#include <stdio.h>

int main() {
    int a[103] = {100};
    int n = 2;

    scanf("%d", &a[1]);
    while(a[n - 1] >= 0){
        a[n] = a[n - 2] - a[n - 1];
        n++;
    }
    for(int i = 0; i < n; i++){
        printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
