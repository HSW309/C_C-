#include <stdio.h>

int main() {
    int a = 0, b = 0, temp = 0;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++){
        printf("%d ", i);
    }
    return 0;
}
