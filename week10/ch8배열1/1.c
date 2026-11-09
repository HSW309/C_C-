#include <stdio.h>

int main() {
    int a[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d%c", a[i], i == 4 ? '\n' : ' ');
    }
    return 0;
}
