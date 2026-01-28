// 3.  Write a program to tally how many of each number within a range are entered. 

#include<stdio.h>

int main(){
    int start,end;
    printf("enter the start of range: ");
    scanf("%d",&start);

    printf("enter the start of range: ");
    scanf("%d",&end);

    int size=end-start+1;
    int arr[size];

    for(int i=0;i<size;i++)
        arr[i]=0;
    

    for(;1;){
        int temp;
        printf("enter number between %d and %d(-1 to quit): ",start,end);
        scanf("%d",&temp);
        if(temp==-1){
            break;
        }
        else if(temp>=start && temp<=end){
            arr[temp-start]++;
        }else{
            printf("invalid number...\n");
            continue;
        }
    }
    for(int i=0;i<size;i++){
        printf("\ntally for %d: %d",(start+i),arr[i]);
    }
}