// 2.  Write a function that creates the following pattern, given the height and width. 
// ex: 
// *********** 
// *********** 
// ***********

#include<stdio.h>

int main(){
    int row,col;
    printf("enter the number of rows: ");
    scanf("%d",&row);

    printf("enter the number of columns: ");
    scanf("%d",&col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("*");
        }
        printf("\n");
    }
}