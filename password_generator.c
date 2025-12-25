#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char numbers[] = "0123456789";
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char symbols[] = "?!@#$&*";

    int size;
    printf("Please enter the size of your password(max length = 15): ");
    scanf("%d", &size);
    if (size > 15)
    {
        printf("Your password request is longer than 15 characters!!!\n");
        return 0;
    }

    char password[15]; // max length of a password

    srand((unsigned int)(time(NULL)));

    for (int u = 0; u < size; u++)
    {
        int random_number = rand() % 4;

        if (random_number == 0)
        {
            random_number = rand() % 10;
            password[u] = numbers[random_number];
        }
        else if (random_number == 1)
        {
            random_number = rand() % 26;
            password[u] = letters[random_number];
        }
        else if (random_number == 2)
        {
            random_number = rand() % 26;
            password[u] = LETTERS[random_number];
        }
        else
        {
            random_number = rand() % 7;
            password[u] = symbols[random_number];
        }
    }

    // printing final answer
    printf("Your randomly generated password is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", password[i]);
    }
    printf("\n");
    printf("Enjoy! :)\n");
    return 0;
}