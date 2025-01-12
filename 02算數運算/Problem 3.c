#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    float a;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &a);
        printf("%0.1f\n", round(a*a*10)/10.0);
    }

	return 0;
}
