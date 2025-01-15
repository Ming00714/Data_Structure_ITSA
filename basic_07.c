#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        char op; 
        int a1, b1, a2, b2; 
        scanf(" %c %d %d %d %d", &op, &a1, &b1, &a2, &b2); 

        int real = 0, imag = 0; 

        if (op == '+') {
            real = a1 + a2;
            imag = b1 + b2;
        } else if (op == '-') {
            real = a1 - a2;
            imag = b1 - b2;
        } else if (op == '*') {
            real = a1 * a2 - b1 * b2; 
            imag = a1 * b2 + b1 * a2; 
        }

        printf("%d %d\n", real, imag);
    }

    return 0;
}

// 複數運算
