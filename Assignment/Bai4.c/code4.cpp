#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    int card_rank;
    int suit_value;
    char rank[3];
    char suit;
}
card;

card deal(int deck[][4], char suits[])
{
    card dealt;
    int x = rand() % 52;
    int dealt_OP = 0;
    while (dealt_OP == 0)
    {
        while (x <= 52)
        {
            if (deck[x / 4][x % 4] == 0)
            {
                dealt.card_rank = x / 4 + 1;
                switch(x / 4 + 1)
                {
                case 1:
                    strcpy(dealt.rank, "A");
                    break;
                case 11:
                    strcpy(dealt.rank, "J");
                    break;
                case 12:
                    strcpy(dealt.rank, "Q");
                    break;
                case 13:
                    strcpy(dealt.rank, "K");
                    break;
                default:
                    sprintf(dealt.rank, "%d", x / 4 + 1);
                    break;
                }
                dealt.suit_value = x % 4;
                dealt.suit = suits[x % 4];
                deck[x / 4][x % 4] = 1;
                dealt_OP = 1;
                break;
            }
            x++;
        }
        x = 0;
    }

    return dealt;
}

void sort(card players[][13])
{
    for (int i = 0; i < 4; i++)
    {
        card tmp;
        for (int j = 0; j < 12; j++)
        {
            for (int k = j + 1; k < 13; k++)
            {
                if (players[i][j].card_rank > players[i][k].card_rank)
                {
                    tmp = players[i][j];
                    players[i][j] = players[i][k];
                    players[i][k] = tmp;
                }
                
				else if (players[i][j].card_rank == players[i][k].card_rank)
                {
                    if (players[i][j].suit_value > players[i][k].suit_value)
                    {
                        tmp = players[i][j];
                        players[i][j] = players[i][k];
                        players[i][k] = tmp;
                    }
                }
            }
        }
    }
}

void print(card players[][13])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Player %d: ", i + 1);
        for (int j = 0; j < 13; j++)
        {
            printf("%2s[%c] ", players[i][j].rank, players[i][j].suit);
        }
        printf("\n Four of a kind: ");
        int card_count = 0, four_count = 0, previous = -1;
        for (int j = 0; j < 13; j++)
        {
            if (players[i][j].card_rank == previous)
            {
                card_count++;
                if (card_count == 4)
                {
                    printf("%2s  ", players[i][j].rank);
                    card_count = 0;
                    four_count++;
                }
            }
            else
                card_count = 1;
            previous = players[i][j].card_rank;
        }
        if (four_count == 0)
            printf("None!");
        printf("\n\n");
    }
}

int main()
{
    char suits[4] = {'s', 'h', 'c', 'd'};
    card players[4][13];
    int cards[13][4];
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cards[i][j] = 0;
        }
    }
    
	srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            players[i][j] = deal(cards, suits);
        }
    }
    sort(players);
    print(players);

    return 0;
}


