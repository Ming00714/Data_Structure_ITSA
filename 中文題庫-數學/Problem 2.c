#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a, b, h, area;
    scanf("%f %f %f", &a, &b, &h);
    area = (a + b) * h / 2;
    printf("Trapezoid area:%0.1f\n", area);

	return 0;
}
