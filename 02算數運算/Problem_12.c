#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);

    b = a / 10;
    c = (a - (b*10)) / 5;
    d = a - (b*10 + c*5);
    
    printf("NT10=%d\n", b);
    printf("NT5=%d\n", c);
    printf("NT1=%d\n", d);

    return 0;
}

// 購票計算
