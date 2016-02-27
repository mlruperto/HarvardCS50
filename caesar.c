/*
    caesar.c

    Michael Ruperto michaelruperto@hotmail.com
    
    pset2 caesar solution
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Variable used as the key
    int key = 0;
    string message;
    
    if (argc<2 || atoi(argv[0])<0 || atoi(argv[1])<0)
    {
        printf("Please only enter one commandline arguement and no negative integer.\n");
        return 1;
    }
    else
    {
        key = atoi(argv[1]);
    }
    message = GetString();
    
    for (int i=0, j=strlen(message); i<j; i++)
    {
        if (islower(message[i])&& isalpha(message[i]))
        {
            message[i] = (message[i] - 'a' + key) % 26 + 97;
        }
        if (isupper(message[i])&& isalpha(message[i]))
        {
            message[i] = (message[i] - 'A' + key) % 26 + 65;
        }
        printf("%c", message[i]);
    }
    printf("\n");
    return 0;
}
