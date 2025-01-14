#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y); // 輸入點的座標

    int r = 100; // 圓的半徑
    if (x * x + y * y <= r * r) {
        printf("inside\n"); // 如果在圓內或圓上
    } else {
        printf("outside\n"); // 如果在圓外
    }

    return 0;
}

// 判斷座標是否在圓形的範圍內
