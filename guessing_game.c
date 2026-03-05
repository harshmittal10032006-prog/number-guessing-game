#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int guess,random,attempts=0;
    srand(time(NULL));
    printf("Welcome to the number guessing game....!");
    random=rand()%100 +1;       //generate number from 1 to 100
    printf("%d",random);
    do{
       printf("\nGuess the number between (1 to 100) : ");
       scanf("%d",&guess);
       attempts++;

       if(random<guess) printf("\nGuess a smaller number. ");
       else if(random>guess) printf("\nGuess a larger number. ");
    }while(guess!=random);

    printf("\nCongratulations!!!...You have guessed the number in %d attempts",attempts);

    printf("\nThanks for playing...");

}