// 3.  Write a program to copy the contents of one array into another in the reverse order.

#include<stdio.h>

int main(){
    int n;
    printf("enter the sixe of the array: ");
    scanf("%d",&n);

    int org[n];
    int rev[n];

    for(int i=0;i<n;i++){
        printf("enter %d number: ",i+1);
        scanf("%d",&org[i]);
    }

    for(int i=0;i<n;i++){
        rev[i]=org[n-1-i];
    }

    printf("\noriginal array: ");
    for(int i=0;i<n;i++){
        printf("%d,",org[i]);
    }
    printf("\nreversed array: ");
    for(int i=0;i<n;i++){
        printf("%d,",rev[i]);
    }
}