#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d*%d=%d\n", i, i, i*i);
    }

    return 0;
}

// 輸出 1*1、2*2、...、N*N之結果
