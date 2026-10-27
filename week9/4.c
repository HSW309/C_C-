#include <stdio.h>

int main(){
    int weight = 0;
    int height = 0;
    int n = 0;
    scanf("%d", &height);
    scanf("%d", &weight);
    n = weight + 100 - height;
    printf("%d\n", n);
    if(n > 0){
        printf("Obesity\nNeed control");
    }
    return 0;
}