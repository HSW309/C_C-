#include <stdio.h>

int main() {
    int count[11] = {0}, num;

    while(scanf("%d", &num) == 1 && num >= 1 && num <= 10){
        count[num]++;
    }
    for(int i = 1; i <= 10; i++){
        if(count[i] > 0) printf("%d : %d\n", i, count[i]);
    }
    return 0;
}
