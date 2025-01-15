#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int r = 100; // 圓的半徑
    if (x * x + y * y <= r * r) {
        printf("inside\n"); 
    } else {
        printf("outside\n"); 
    }

    return 0;
}

// 判斷座標是否在圓形的範圍內
