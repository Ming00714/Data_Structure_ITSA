#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    printf("%d days\n", N / 86400);
    N = N % 86400;
    printf("%d hours\n", N / 3600);
    N = N % 3600;
    printf("%d minutes\n", N / 60 );
    N = N % 60;
    printf("%d seconds\n", N);
    
    return 0;
}

// 計算時間的組合
