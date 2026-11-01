#include <stdio.h>

int main() {
    int n = 0, num = 0;
    double sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        sum += num;
    }
    if(n > 0) printf("%.2f\n", sum / n);
    return 0;
}
