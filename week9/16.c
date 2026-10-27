#include <stdio.h>

int main(){
    float n;
    scanf("%f", &n);
    if(n >= 4){
        printf("scholarship");
    } 
    else if(n >= 3){
        printf("next semester");
    }
    else if(n >= 2){
        printf("seasonal semester");
    }
    else if(n < 2){
        printf("retake");
    }
    return 0;
}