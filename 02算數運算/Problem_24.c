#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a, b, c, t = 0;
        scanf("%d %d", &a, &b);
        if(a > b){
            c = a;
            a = b;
            b = c;
        }
        for(a; a <= b; a++){
            t += a;
        }
        printf("%d\n", t);
    }

    return 0;
}

// 計算兩整數間所有整數的總和
