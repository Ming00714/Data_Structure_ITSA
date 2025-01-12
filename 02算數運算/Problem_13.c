#include <stdio.h>
#include <math.h>

int main(){
    float w, h;
    scanf("%f %f", &w, &h);
    h = h / 100;
    printf("%0.2f\n", round(w / h / h * 100) / 100.00);
    
    return 0;
}

// BMI計算
