#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c); 

        int total = a + b + c; 
        int below60 = (a < 60) + (b < 60) + (c < 60); 
        int atLeast80 = (a >= 80) || (b >= 80) || (c >= 80); 

        if (below60 == 0 || (below60 == 1 && total >= 220)) {
            printf("P\n"); 
        } else if ((below60 == 1 && total < 220) || atLeast80) {
            printf("M\n");
        } else {
            printf("F\n"); 
        }
    }

    return 0;
}

// 考試測驗
