#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); 

    int matrix[rows][cols]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]); 
        }
    }

    for (int j = 0; j < cols; j++) { 
        for (int i = 0; i < rows; i++) { 
            if(i == rows-1) printf("%d\n", matrix[i][j]);
            else printf("%d ", matrix[i][j]);
        }
        
    }

    return 0;
}

// 矩陣反轉
