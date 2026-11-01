#include <stdio.h>

int main() {
    int n = 0;
    while(1){
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
        if(scanf("%d", &n) != 1) break;
        if(n == 1) printf("\nSeoul\n");
        else if(n == 2) printf("\nWashington\n");
        else if(n == 3) printf("\nTokyo\n");
        else if(n == 4) printf("\nBeijing\n");
        else{
            printf("\nnone\n");
            break;
        }
        printf("\n");
    }
    return 0;
}
