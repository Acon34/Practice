//Libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//Variables
string text;
int letters, sentences, spaces, i, grades, words;
void letcount();
float index, L, S;


//Main
int main()
{
    //Get Text
    text = get_string("Text: ");
    //Letter Counter
    letcount();
    
    words = (spaces + 1);
    
    //Grade assignments
    L = ((float)letters / (float)words * 100);
    
    S = ((float)sentences / (float)words * 100);
    
    index = (0.0588 * L - 0.296 * S - 15.8);
    
    grades = round(index);
    
    //printf("Letters: %i\nWords: %i\nSentences: %i\n", letters, words, sentences);
    
    //Grade
    if (grades < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grades > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grades);
    }

}

//Count Characters
void letcount()
{
    for (i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            spaces++;
        }
        if (text[i] == '?' || text[i] == '.' || text[i] == '!')
        {
            sentences++;
        }
    }
}