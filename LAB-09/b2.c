// 2.  Write a program to find median of array.

// if length is odd ==> median=(n/2)th obs
// if length is even ==> median= (n/2) + ((n/2)-1)

#include<stdio.h>

int main(){
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    float median=0;
    if(n%2==0){
        median=(arr[n/2] + arr[(n/2)-1])/2.0;
    }else{
        median=arr[n/2];
    }
    printf("The median of the array is: %.2f\n", median);
}