// 2.  Check a given matrix is a sparse matrix or not.

#include<stdio.h>

int main(){
    int N,M;

    printf("enter number of row: ");
    scanf("%d",&N);

    printf("enter number of col: ");
    scanf("%d",&M);

    int mat[N][M];

    for(int i=0;i<N;i++){
        printf("enter %d row(space sep): ",i+1);
        for(int j=0;j<M;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int zero=0,non_zero=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(mat[i][j]==0) zero++;
            else non_zero++;
        }
    }

    if(zero>non_zero) printf("This is a sparse matrix.");
    else printf("This is NOT a sparse matrix.");
}