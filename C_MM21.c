#include <stdio.h>

int main(){
    long long int n, t = 1;
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++){
        t *= i;
    }
    printf("%lld\n", t);
    return 0;
}

// 算階乘
