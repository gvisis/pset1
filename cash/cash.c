#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
    float cash;
    do
    {
        //ask how much change is owed
        cash = get_float("Change owed: ");
    }
    //ask until the answer is greater than 0
    while (cash < 0);
    //convert to cents and round cents to nearest integer number
    int cents = round(cash * 100);
    //set the count for coins
    int coins = 0;
    //repeat this until the amount of cents is greater ir equal to 25
    while (cents >= 25)
    {   
        cents = cents - 25;
        coins++;
    }
    while (cents >= 10)
    {   
        cents = cents - 10;
        coins++;
    }
    while (cents >= 5)
    {   
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1)
    {   
        cents = cents - 1;
        coins++;
    }
    //print out how many coins were used in total
    printf("Coins used: %i\n", coins);
}




