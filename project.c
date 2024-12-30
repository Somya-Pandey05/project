#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random ,guess;
    int no_of_guess= 0;
    srand(time(NULL));
    printf("welcome to world of Guessing Number/n");
    random = rand() %100 + 1;  //generating bw 0 to 100
    do
    {
        printf("\n Please enter your guess between(1 to 100) = ");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random)
        {
            printf("Guess larger number");
        }
        else if(guess>random)
        {
            printf("Guess smaller number");
        }
        else
        {
            printf("\nCongratulations !!!you have successfully gussed the number in %d attempts",no_of_guess);
        }
    } 
    while (guess!=random);
    printf("\n Bye Bye, Thanks for Playing");
      printf("\n Developed by Somya Pandey");
}