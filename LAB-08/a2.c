// 2.  Write a C program where the computer randomly selects a number between 1 and 100. The user is then 
// prompted to guess the number. After each guess, the program should give feedback: 
// If the guessed number is lower than the target, print "Too low! Try again." 
// If the guessed number is higher than the target, print "Too high! Try again." 
// If the guessed number is correct, print "Congratulations! You guessed the correct number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // printf("%d\n",RAND_MAX);
    // int t = rand();
    // printf("%d\n",t);     // same random number will br printed everytime you run this program.
 
    srand(time(NULL));
    int random = rand()%100 +1;

    for(;1;){
        int guess;
        printf("\nenter your guess: ");
        scanf("%d",&guess);

        if(guess>random){
            printf("Too high! Try again." );
        }else if(guess<random){
            printf("Too low! Try again.");
        }else{
            printf("Congratulations! You guessed the correct number");
        }
    }
    
}