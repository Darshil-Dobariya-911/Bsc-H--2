#include<stdio.h>

int main(){


    for(int i=1;i<=5;i++){
        int num=1;
        for(int k=i+1;k<=5;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j<i){
                printf("%d",num);
                num++;
            }else{
                printf("%d",num);
                num--;
            }
        }
        printf("\n");
    }
}