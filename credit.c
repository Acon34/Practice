//Libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Variables
void get_cc();
void check_valid();
void checksum();
void checkd();
int sum1, sum2, total, lastnum, lastnum2, lastnum1, lastnum2, i;
long card, card, cc;

//Main
int main()
{
    //Get card number
    get_cc();
    
    //Check if card number is valid
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    
    //Calculate checksum
    checksum();
    
    //Check first digits
    long firstd = card;
    //Check if Invalid
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    // Get starting digits
    do
    {
        firstd = firstd / 10;
    }
    while (firstd > 100);
    
    // Check Master
    if ((firstd / 10 == 5) && (0 < firstd % 10 && firstd % 10 < 6))
    {
        printf("MASTERCARD\n");
    }
    //Check if Amex
    else if ((firstd / 10 == 3) && (firstd % 10 == 4 || firstd % 10 == 7))
    {
        printf("AMEX\n");
    }
    //Check if VISA
    else if (firstd / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
    
}




// checksum
void checksum()
{
    //loop
    sum1 = 0;
    sum2 = 0;
    total = 0;
    card2 = card;
    
    do
    {
        // Remove last digit and sum
        lastnum1 = card2 % 10;
        card2 = card2 / 10;
        sum1 = sum1 + lastnum1;
        
        // Remove second last digit
        lastnum2 = card2 % 10;
        card2 = card2 / 10;
        
        // Double second last digit and add digits to sum2
        lastnum2 = lastnum2 * 2;
        lastnum1 = lastnum2 % 10;
        lastnum2 = lastnum2 / 10;
        sum2 = sum2 + lastnum1 + lastnum2;
    }
    while (card2 > 0);    total = sum1 + sum2;
    
    total = sum1 + sum2;
}

// Get cc
void get_cc()
{
    card = get_long("Number: ");    
    // Count length
    i = 0;
    cc = card;
    for (i = 0; cc > 0;i++)
    {
        cc = cc / 10;
    }
}