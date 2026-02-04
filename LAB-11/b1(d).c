// Given a N x M row-wise sorted matrix, find the median of the matrix. (Note: N*M is always odd)

#include <stdio.h>

int main() {
    int N, M;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &N, &M);

    int mat[N][M];
    int arr[N * M];
    int k = 0;

    // Input matrix
    printf("Enter matrix elements:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
            arr[k++] = mat[i][j];   // copy to array
        }
    }

    // Bubble sort the array
    for(int i = 0; i < N*M-1; i++) {
        for(int j = 0; j < N*M-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Median
    int median = arr[(N * M) / 2];
    printf("Median of the matrix is: %d\n", median);

    return 0;
}
