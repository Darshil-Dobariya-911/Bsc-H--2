// iven a square matrix mat, return the sum of the matrix diagonals. Only include the sum of all the elements 
// on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary 
// diagonal.

#include<stdio.h>

int main(){
    int N;
    printf("Enter size of square matrix: ");
    scanf("%d", &N);

    int mat[N][N];

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum=0;

    for(int i=0;i<N;i++){
        if(i==(N-1-i)){
            sum+=mat[i][i];
        }else{
            sum+=mat[i][i] + mat[i][N-1-i];
        }
    }

    printf("sum: %d",sum);
}