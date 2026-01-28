// 3.  Write  a  program  to  generate  Pythagorean  triplets  in  1  to  100.  "3  4  5  is  Pythagorean  triplet  where 
// 3*3+4*4=5*5.

#include<stdio.h>

int main(){
    int n1,n2,n3;
    int count=0;
    for(n1=1;n1<=100;n1++){
        for(n2=n1;n2<=100;n2++){
            for(n3=n2;n3<=100;n3++){
                //check for pythagorean triplet using the formula.
                if(n1*n1 + n2*n2 == n3*n3){
                    printf("%d, %d, %d is a pythagorean triplet.\n",n1,n2,n3);
                    count++;
                }
            }
        }
    }
    printf("count: %d",count);
}