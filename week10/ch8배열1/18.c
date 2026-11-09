#include <stdio.h>
#include <math.h>

int main() {
    double weight[6], sum = 0;

    for(int i = 0; i < 6; i++){
        scanf("%lf", &weight[i]);
    }
    for(int i = 0; i < 6; i++){
        sum += weight[i];
    }
    printf("%.1f\n", round(sum / 6.0 * 10) / 10.0);
    return 0;
}
