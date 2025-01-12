#include <stdio.h>
#include <math.h>

int main(){
    float a;
    scanf("%f", &a);
    printf("%0.1f\n", round((a * 9/5 + 32) * 10) / 10);

    return 0;
}

// 攝氏溫度轉華氏溫度
