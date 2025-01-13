#include <stdio.h>

int main(){
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int total, tmp, cost = 0;
    total = (h2*60 + m2) - (h1*60 + m1);
    
    if(total > 240){
        tmp = total - 240;
        total = 240;
        tmp = tmp / 30;
        tmp = tmp * 60;
        cost = cost + tmp;
    } 
    if(total > 120 && total <= 240){
        tmp = total - 120;
        total = 120;
        tmp = tmp / 30;
        tmp = tmp * 40;
        cost = cost + tmp;
    }
    if(total <= 120){
        tmp = total;
        tmp = tmp / 30;
        tmp = tmp * 30;
        cost = cost + tmp;
    } 

    printf("%d\n", cost);
    return 0;
}

// 停車費計算
