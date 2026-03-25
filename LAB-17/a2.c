#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j, sum = 0;
    int **matrix;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    matrix = (int **)malloc(m * sizeof(int *));
    for(i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    for(i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}