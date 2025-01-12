#include <stdio.h>

int main(){
    int a, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        if(a > 31){
            printf("Value of more than 31\n");
            continue;
        }
        printf("%d\n", 2<<(a-1));
    }

    return 0;
}
