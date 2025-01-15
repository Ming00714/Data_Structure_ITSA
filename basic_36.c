#include <stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) printf("Bissextile Year\n");
    else printf("Common Year\n");

    return 0;
}

//  平、閏年判定
