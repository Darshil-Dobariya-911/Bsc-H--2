// Given a list of N integers, representing height of mountains. Find the height of the tallest mountain. 
// Input  
// First line will contain T, number of test cases. Then the test cases follow. 
// The first line in each test case contains one integer, N. 
// The following line contains N space separated integers: the height of each mountains. 
// Output: 
// For each test case, output one line with one integer: the height of the tallest mountain for that test case.

#include<stdio.h>

int main(){
    int T;
    printf("enter test case: ");
    scanf("%d",&T);

    while(T>0){
        int N;
        scanf("%d", &N);

        int max = -1, h;

        for (int i = 0; i < N; i++) {
            scanf("%d", &h);
            if (h > max)
                max = h;
        }
        T--;
        printf("%d\n", max);
    }
}