#include <stdio.h>

int main() {
    int n = 0, num = 0;
    char ch = 'A';
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            printf("%c ", ch);
            ch++;
        }
        for(int j = 0; j < i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
