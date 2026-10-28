#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n > 0){
        printf("%s", (n % 2 == 0) ? "Even Number" : "Odd Number");
    }
    else{
        printf("Non positive");
    }
    return 0;
}