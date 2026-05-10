#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string player_1 = get_string("Player 1: ");
    string player_2 = get_string("Player 2: ");

    int score_1 = compute_score(player_1);
    int score_2 = compute_score(player_2);

    if(score_1 > score_2)
    {
        printf("Congradulations, Player 1 has won!!\n");
    }
    else if(score_2 > score_1)
    {
        printf("Congradulations, Player 2 has won!!\n");
    }
    else
    {
        printf("It is a tie.\n");
    }
}

int compute_score(string word)
{

    int score = 0;

    for(int i = 0;i < strlen(word) ;i++)
    {
        if(isupper(word[i]))
        {
            score += points[word[i] - 'A'];
        }
        else if(islower(word[i]))
        {
            score += points[word[i] - 'a'];
        }
        else
        {
            score += 0;
        }
    }
    return score;
}
