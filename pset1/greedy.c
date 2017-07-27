
#include <stdio.h>
#include <cs50.h>
#include <math.h>

void calcoin(float cent);
int main(void)
{
    string prompt = "How much change is owed? \n";
    printf("O hai! %s", prompt);
    float change = get_float();
    while(change < 0)
    {
        printf("%s", prompt);
        change = get_float();
    }
    calcoin(change * 100);
}

void calcoin(float cents)
{
    int cent = (int) round(cents);
    int coins = 0;
    if (cent > 25)
    {
        coins += cent / 25;
        cent %= 25;
    }
    if (cent > 10)
    {
        coins += cent / 10;
        cent %= 10;
    }
    if (cent > 5)
    {
        coins += cent / 5;
        cent %= 5;
    }
    coins += cent;
    
    printf("%d\n", coins);
}
