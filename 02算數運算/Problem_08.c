#include <stdio.h>

int main(){
    int a, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        printf("%d %d %d\n", a, a*a, a*a*a);
    }

    return 0;
}

// 計算平方值與立方值
