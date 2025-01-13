#include <stdio.h>

int main(){
    float t, s, tmp, total = 0;
    scanf("%f %f", &t, &s);
    
    if(t > 120){
        tmp = t - 120;
        t = 120;
        total = tmp * s * 1.66; 
    }
    if(t > 60 && t <= 120){
        tmp = t - 60;
        t = 60;
        total = total + tmp * s * 1.33;
    }
    if(t <= 60){
        total = total + t * s;
    }
    printf("%0.1f\n", total);
    return 0;
}

// 薪水計算
