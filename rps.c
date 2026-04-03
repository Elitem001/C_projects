#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void make_upper(char *item)
{
    for (int i = 0; item[i] != '\0'; i++)
    {
        if (islower(item[i]))
        {
            item[i] = toupper(item[i]);
        }
    }
}

int main()
{
    srand(time(NULL));
    int nahodne = rand() % 300;

    printf("\t<WELCOME TO ROCK,PAPER,SISSORS GAME>\t\t\n");
    printf("\n");
    printf("Please choose an item: ");
    char item[20];
    scanf("%s", item);
    make_upper(item);
    char *rozhodnutie_pocitaca;

    // VOLBA POCITACA
    if (nahodne < 100)
    {
        rozhodnutie_pocitaca = "ROCK";
    }
    else if (nahodne > 100 && nahodne < 200)
    {
        rozhodnutie_pocitaca = "PAPER";
    }
    else if (nahodne > 200)
    {
        rozhodnutie_pocitaca = "SCISSORS";
    }
    else
    {
        printf("chyba\n");
        return -1;
    }

    // POROVNANIA
    int porovnanie = strcmp(item, rozhodnutie_pocitaca);
    printf("<<<<<<<<<<<<<<<<<<<<<<<<\n");
    if (porovnanie == 0)
    {
        printf("You both got the same thing! No one wins!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "SCISSORS") == 0 && strcmp(item, "ROCK") == 0)
    {
        printf("ROCK beats SCISSORS! You win!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "ROCK") == 0 && strcmp(item, "SCISSORS") == 0)
    {
        printf("ROCK beats SCISSORS! Computer wins!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "PAPER") == 0 && strcmp(item, "SCISSORS") == 0)
    {
        printf("SCISSORS destroy PAPER! You win!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "SCISSORS") == 0 && strcmp(item, "PAPER") == 0)
    {
        printf("SCISSORS destroy PAPER! Computer wins!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "PAPER") == 0 && strcmp(item, "ROCK") == 0)
    {
        printf("PAPER destroys ROCK! Computer wins!\n");
    }
    else if (strcmp(rozhodnutie_pocitaca, "ROCK") == 0 && strcmp(item, "PAPER") == 0)
    {
        printf("PAPER destroys ROCK! You win!\n");
    }

    printf(">>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("Computer's item was: [%s]\n", rozhodnutie_pocitaca);
    printf("-------------------------------------------------\n");
    return 0;
}