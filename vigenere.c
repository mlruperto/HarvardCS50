/*
    vigenere.c

    Michael Ruperto michaelruperto@hotmail.com
    
    pset2 vigenere solution
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int lastChar = 0; 
    int cntr = 0; 
    string message = NULL; 
    string key = argv[1];
   
    // Checks users args
    if (argc != 2)
    {
        printf("You must enter a single command-line argument, Please try again: \n");
        return 1; 
    }
    // Checks if the input is a word
    for ( int n = 0; n < strlen(key); n++) 
    {
        if (!isalpha(argv[1][n]))
        {
            printf("What you've entered is non-alphabetical, Please try again\n");
            return 1;   
        }
    }
    do 
    {
        message = GetString(); 
    }
    while(message == '\0'); 
    
    for (int i = 0, j = strlen(message); i < j; i++)
    { 
        if (isalpha(message[i]))
        {
            cntr = lastChar % strlen(key);
            if (islower(message[i]))
            {
                if (islower(key[cntr]))
                {
                    message[i] = ((message[i] - 'a' + key[cntr] - 97) % 26) + 97;
                    printf("%c", message[i]);
                }
                else
                {
                    message[i] = ((message[i] - 'a' + key[cntr] - 65) % 26) + 97;
                    printf("%c", message[i]);
                }
            }
            if (isupper(message[i]))
            {
                if (islower(key[lastChar]))
                {
                    
                    message[i] = ((message[i] - 'A' + key[cntr] - 97) % 26) + 65;
                    printf("%c", message[i]);
                }
                else
                {
                    message[i] = ((message[i] - 'A' + key[cntr] - 65) % 26) + 65;
                    printf("%c", message[i]);
                }
           
            }
            lastChar++;
        }
        else
        {   
            // encryted message
            printf("%c", message[i]);
        }
    }
    printf("\n");
    return 0; 
}
