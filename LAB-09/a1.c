// 1.  Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many 
// of them are positive, negative, even and odd.

#include<stdio.h>

int main(){
    int num[5];
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<5;i++){
        printf("enter %d number: ",i+1);
        scanf("%d",&num[i]);

        if(num[i]>0){
            pos++;
        }
        if(num[i]<0){
            neg++;
        }
        if(num[i]%2==0){
            even++;
        }
        if(num[i]%2!=0){
            odd++;
        }
        
    }
    printf("total negative num: %d\n",neg);
    printf("total positive num: %d\n",pos);
    printf("total even num: %d\n",even);
    printf("total odd num: %d",odd);

    
}