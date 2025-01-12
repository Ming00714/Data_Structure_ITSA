#include <stdio.h>
#include <math.h>

int main(){
    float mi;
    scanf("%f", &mi);
    printf("km=%0.1f\n", round(mi*1.6*10) / 10);

    return 0;
}
