#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_password()
{
    const char correct_pass[] = "1234";
    char password[100];
    int attempt = 0;
    int success = 0;

    do 
    {
        printf("Enter Password: ");
        scanf("%s", &password);

        if (strcmp(password, correct_pass) == 0) 
        {
            printf("Password entered is correct\n");
            break;    //breaks the loop so that it isnt stuck after entering the correct password
        } 
        else 
        {
            printf("Incorrect password. Please retry.\n");
            attempt++; 

        }

    } while (attempt < 3); //gives 3 tries max

    if (attempt == 3) //message for unsuccessful 3 tries
    {
        printf("Too many incorrect attempts. Access denied.\n");
    }
}

