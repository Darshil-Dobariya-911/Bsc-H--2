// Write a C program that finds the missing number in an array containing n-1 integers from 1 to n. You are 
// given an array that has numbers in the range 1 to n, but one number is missing. Using a loop, identify the 
// missing number. 
// Input: An array of integers containing n-1 elements. 
// Output: The missing number. 
// Example Input: 1, 2, 4, 5 (Missing number is 3) 
// Example Output: 3

#include<stdio.h>

int main(){
    int arr[] = {1,2,3,5};
    int n=4;
    for(int i=0;i<n;){
        int correctIndex = arr[i]-1;
        
        if(arr[i]!=arr[correctIndex] && arr[i]>=1 && arr[i]<=n){
            int temp = arr[correctIndex];
            arr[correctIndex]=arr[i];
            arr[i]=temp;
        }else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("missing element: %d",i+1);
            break;
        }
    }

}