#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double distance;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    // 計算兩點距離
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.2f\n", distance);

    return 0;
}

// 計算兩點距離
