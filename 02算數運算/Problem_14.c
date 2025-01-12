#include <stdio.h>
#include <math.h>

int main(){
    float dis, v_1, v_2;
    scanf("%f", &dis);
    dis = dis * 100.0;
    v_1 = 100.0;
    v_2 = 30 * 2.54;
    
    printf("%.0f\n", ceil(dis / (v_1 - v_2)));
    

    return 0;
}

相遇時間計算
