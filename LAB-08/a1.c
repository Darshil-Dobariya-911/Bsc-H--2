// 1.  Write a program that finds a largest and smallest number from series of inputted number from user (stop) 
// asking a number if user has inputted -1 as number) 

#include<stdio.h>
#include<math.h>

int main(){
    int max=0,min=0;

    for(;1;){
        int temp;
        printf("enter the num: ");
        scanf("%d",&temp);

        if(temp==-1){
            break;
        }
        if(temp>max){
            max=temp;
        }
        if(temp<min){
            min=temp;
        }
    }
    printf("minimun value: %d",min);
    printf("maximum number: %d",max);
}