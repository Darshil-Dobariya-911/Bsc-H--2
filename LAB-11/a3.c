// Given an N x M integer matrix, if an element is 0, set its entire row and column to 0's.

#include<stdio.h>

int main(){
    int N,M;

    printf("enter number of row: ");
    scanf("%d",&N);

    printf("enter number of col: ");
    scanf("%d",&M);

    int mat[N][M];
    int row[N],col[M];

    for(int i=0;i<N;i++) row[i]=0;
    for(int j=0;j<M;j++) col[j]=0;

    for(int i=0;i<N;i++){
        printf("enter %d row(space sep): ",i+1);
        for(int j=0;j<M;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    // making the values 0
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(row[i]==1 || col[j]==1){
                mat[i][j]=0;
            }
        }
    }
    //printing the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}