// Given a N x M matrix, print its element in zig-zag fashion, i.e., print first row from left to right, second row 
// from right to left, third row again from left to right and so on.

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
    for(int i=0;i<N;i++){
        if(i%2==0){
            for(int j=0;j<M;j++){
                printf("%d ",mat[i][j]);
            }
        }else{
            for(int j=M-1;j>=0;j--){
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
}