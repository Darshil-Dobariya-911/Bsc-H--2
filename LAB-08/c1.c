// 1.  Write a program to print the triangle shown below: 
                        // A 
                        // 12 
                        // BCD 
                        // 3456 
                        // EFGHI
#include<stdio.h>

int main(){
    char ch='A';
    int num=1;

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                printf("%c",ch);
                ch++;
            }else{
                printf("%d",num);
                num++;
            }
        }
        printf("\n");
    }
}