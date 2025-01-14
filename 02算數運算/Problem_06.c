#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", (a+b)*(a+b));
    }

    return 0;
}

// 計算兩數和的平方值
