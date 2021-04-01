//Libraries
#include <cs50.h>
#include <math.h>
#include <stdio.h>

//Variables
float dollars;
void get_number();
int cents;
int count;

//Main program
int main()
{
    //Get positive number
    get_number();
    //Convert dollars to cents
    cents = round(dollars * 100);
    //Calculate how many coins
    //
    //25 cents
    while (cents >= 25)
    {
        cents = (cents - 25);
        count = (count + 1);
    }
    //10 cents
    while (cents >= 10)
    {
        cents = (cents - 10);
        count = (count + 1);
    }
    //5 cents
    while (cents >= 5)
    {
        cents = (cents - 5);
        count = (count + 1);
    }
    //1 cent
    while (cents >= 1)
    {
        cents = (cents - 1);
        count = (count + 1);
    }


    //Print coins
    printf("%i\n", count);
    
}





//Get positive number
void get_number()
{
    do 
    {
        dollars = get_float("Amount of dollars: $");
    }
    while (dollars < 0);
}