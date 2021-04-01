//Libraries
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

//Variables
int i, l, a;
int key, tempc;
bool success;
string plain, cipher;



//Main
int main(int argc, string argv[])
{
    //Check Length
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Count letters and digits
    key = atoi(argv[1]);
    for (i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]))
        {
            l++;
        }
    }

    //If there are any letters prompt error
    if (l > 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        a = 1;
    }

    //Encrypt
    plain = get_string("plaintext: ");
    printf("ciphertext: ");
    //Print Encryption
    for (i = 0; i < strlen(plain); i++)
    {
        //Check if alphabetical
        if isalpha(plain[i])
        {
            //Encrypt uppercase
            if isupper(plain[i])
            {
                tempc = ((int)plain[i] - 65);
                tempc = (tempc + key) % 26;
                tempc = tempc + 65;
                printf("%c", tempc);
            }
            //Encrypt lowercase
            else if islower(plain[i])
            {
                tempc = ((int)plain[i] - 97);
                tempc = (tempc + key) % 26;
                tempc = tempc + 97;
                printf("%c", tempc);
            }
        }
        else
        {
            printf("%c", plain[i]);
        }
    }

    //New line
    if (a == 1)
    {
        printf("\n");
    }
}
