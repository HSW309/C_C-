#include <stdio.h>

int main() {
    int count[10] = {0}, num;

    while(scanf("%d", &num) == 1 && num > 0 && num < 100){
        count[num / 10]++;
    }
    for(int i = 0; i < 10; i++){
        if(count[i] > 0) printf("%d : %d\n", i, count[i]);
    }
    return 0;
}
