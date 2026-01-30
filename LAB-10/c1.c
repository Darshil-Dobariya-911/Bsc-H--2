// Write following advance programs in C. (Array) 
// 1.  Chef visited a grocery store for fresh supplies. There are N items in the store where the ith item has a 
// freshness value Ai and cost Bi. 
 
// Chef has decided to purchase all the items having a freshness value greater than equal to X. Find the total 
// cost of the groceries Chef buys. 
 
// Input Format 
// The first line of input will contain a single integer T, denoting the number of test cases. 
// Each test case consists of multiple lines of input. 
// The first line of each test case contains two space-separated integers N and X — the number of items and 
// the minimum freshness value an item should have. 
// The second line contains N space-separated integers, the array A, denoting the freshness value of each 
// item. 
// The third line contains N space-separated integers, the array B, denoting the cost of each item. 
// Output Format 
// For each test case, output on a new line, the total cost of the groceries Chef buys.

#include<stdio.h>

int main(){
    //enter the test case.
    int T;
    scanf("%d",&T);


    while(T>0){
        //enter the number of items and min freshness value.
        int N,X;
        scanf("%d %d",&N,&X);

        //freshness value of all the items.
        int A[N];
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);
        }

        //cost of all the items.
        int B[N];
        for(int i=0;i<N;i++){
            scanf("%d",&B[i]);
        }

        int total_cost=0;

        for(int i=0;i<N;i++){
            if(A[i]>=X){
                total_cost+=B[i];
            }
        }
    printf("total cost: %d",total_cost);

    }

}