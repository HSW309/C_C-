#include <stdio.h>

int main(){
    int one = 0;
    int two = 0;
    int three = 0;

    scanf("%d", &one);
    scanf("%d", &two);
    scanf("%d", &three);
    if(one > 0 && two > 0 && three > 0){
        printf("All Positive");
    }
    else if(one == 0 || two == 0 || three == 0){
        printf("Contain Zero");
    }
    else{
        printf("Mixed");
    }   
    return 0;
}