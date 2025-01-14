#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a, b;
    float area;
    scanf("%f %f", &a, &b);
    area = a * b / 2;
    printf("Triangle area:%0.1f\n", area);

	return 0;
}

// 計算三角形面積
