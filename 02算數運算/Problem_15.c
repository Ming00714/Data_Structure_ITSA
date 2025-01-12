#include <stdio.h>
#include <math.h>

int main(){
    float m;
    scanf("%f", &m);

    if(m <= 800) printf("%0.1f\n", round(m * 0.9 * 10) / 10.0);
    else if(800 < m && m < 1500) printf("%0.1f\n", round(m * 0.9 * 0.9 * 10) / 10.0);
    else if(1500 <= m) printf("%0.1f\n", round(m * 0.9 * 0.79 *10) / 10.0);

    return 0;
}

// 電話費計算
