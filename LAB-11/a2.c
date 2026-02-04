// Given a N x M(N rows and M columns) matrix, print it upside down, i.e, last row should come first, second 
// last should come second......so on..and finally first row should come in last.

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

    printf("\n");
    for(int i=N-1;i>=0;i--){
        for(int j=0;j<M;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}