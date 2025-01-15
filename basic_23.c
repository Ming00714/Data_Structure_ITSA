#include <stdio.h>

int main(){
    int n, a, b, c, t = 0;
    scanf("%d,%d,%d,%d", &n, &a, &b, &c);

    t = a*15 + b*20+ c*30;
    if(n < t){
        printf("0\n");
        exit(0);
    }
    n = n - t;

    a = n / 50;
    n = n % 50;
    b = n / 5;
    n = n % 5;
    c = n;
    printf("%d,%d,%d\n", c, b, a);

    return 0;
}

// 找零錢問題
