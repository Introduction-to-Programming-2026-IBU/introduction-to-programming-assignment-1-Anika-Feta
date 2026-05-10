#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = 100.0 * letters / words;
    float S = 100.0 * sentences / words;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int)round(index));
    }
}

int count_letters(string text)
{
    int count_l = 0;

    for(int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            count_l += 1;
        }
        else
        {
            count_l += 0;
        }
    }
    return count_l;
}

int count_words(string text)
{
    int count_w = 0;
    int spaces = 0;

    for(int j = 0; j < strlen(text); j++)
    {
        if(text[j] == ' ')
        {
            spaces += 1;
        }
        else
        {
            spaces += 0;
        }
    }
    count_w = spaces + 1;
    return count_w;
}

int count_sentences(string text)
{
    int count_s = 0;

    for(int k = 0; k < strlen(text); k++)
    {
        if(text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            count_s += 1;
        }
        else
        {
            count_s += 0;
        }
    }
    return count_s;
}
