// 2.  Given an m x n matrix, return all elements of the matrix in spiral order.

#include<stdio.h>

int main(){
    int N,M;

    printf("enter number of row: ");
    scanf("%d",&N);

    printf("enter number of col: ");
    scanf("%d",&M);

    int mat[N][M];
    // int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    for(int i=0;i<N;i++){
        printf("enter %d row(space sep): ",i+1);
        for(int j=0;j<M;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int top=0,bot=N-1,left=0,right=M-1;

    while(top<=bot && left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",mat[top][i]);
        }
        top++;

        for(int i=top;i<=bot;i++){
            printf("%d ",mat[i][right]);
        }
        right--;

        for(int i=right;i>=left;i--){
            printf("%d ",mat[bot][i]);
        }
        bot--;

        for(int i=bot;i>=top;i--){
            printf("%d ",mat[i][left]);
        }
        left++;
    }
    


}