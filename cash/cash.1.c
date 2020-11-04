#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   float cash;
    do
    {
        cash = get_float("Change owed: ");
    }
    while (cash < 0);
    int cents = round(cash * 100);
    int coins25 = 0, coins10 = 0, coins5 = 0, coins1 = 0;
    while (cents>=25)
    {   
        printf("%i - 25 = %i\n", cents, cents);
        cents = cents - 25;
        coins25++;
    }
    while (cents>=10)
    {   cents = cents - 10;
        printf("%i - 10 = %i\n", cents, cents);
        coins10++;
    }
    while (cents>=5)
    {   cents = cents - 5;
        printf("%i - 5 = %i\n", cents, cents);
        coins5++;
    }
    while (cents>=1)
    {   cents = cents - 1;
        printf("%i - 1 = %i\n", cents, cents);
        coins1++;
    }
    float sum = (int)(coins25*25 + coins10*10 + coins5*5 + coins1*1) / 100;
    printf("coins used: 0.25 = %i, 0.10 = %i, 0.05 = %i, 0.01 = %i\n", coins25, coins10, coins5, coins1);
    printf("total sum: $ %f\n", sum);

}




