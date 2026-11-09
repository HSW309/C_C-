#include <stdio.h>

int main() {
    int a[20] = {1, 1};

    for(int i = 2; i < 20; i++){
        a[i] = a[i - 2] + a[i - 1];
    }
    for(int i = 0; i < 20; i++){
        printf("%d%c", a[i], i == 19 ? '\n' : ' ');
    }
    return 0;
}
