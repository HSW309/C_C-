#include <stdio.h>

int main() {
    char ch = 0;
    scanf(" %c", &ch);
    for(int i = 0; i < 20; i++){
        printf("%c", ch);
    }
    return 0;
}
