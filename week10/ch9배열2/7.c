#include <stdio.h>

int main() {
    int a[5] = {95, 75, 85, 100, 50};

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d%c", a[i], i == 4 ? '\n' : ' ');
    }
    return 0;
}
