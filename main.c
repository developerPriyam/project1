#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int guess,number,nguesses=1;
srand(time(NULL));
number = rand() % 1000 + 1;
//printf("Random number between 500 and 1000: %d\n",number);
do{
    printf("Guess the number between 1 to 100\n:");
    scanf("%d",&guess);
    if(guess>number){
        printf("Lower number please!\n");

    }else if (guess<number){
        printf("Higher number please!\n");

    }else{
        printf("You guessed it in %d attempts\n",nguesses);
    }
    nguesses++;
}while(guess!=number);
return 0;
}
