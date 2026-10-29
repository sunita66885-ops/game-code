#include<stdio.h>
int main()
{
int  secret_num=25;
int guess;
int attempts=0;
printf("enter gues number\n");
printf("guess a number between 1 and 50:");
scanf("%d",& guess);

while(guess != secret_num)
{
    attempts++;

    if(guess>secret_num)
    {
        printf("to high! try again.\n");
    }
 else
 {
    printf("to low! try again.\n");

 }
printf("\nguess a number between 1 and 50:");
scanf("%d",&guess);
}
attempts++;
 
printf("\ncongratulation! you guessed the correct number.\n");
printf("total attempts: %d\n",attempts);
printf("====== game over======");

return 0;
}














