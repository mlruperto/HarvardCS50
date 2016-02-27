/*
    initials.c

    Michael Ruperto michaelruperto@hotmail.com
    
    pset2 Initial solution
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    //obtain user's name
    string name = GetString();
    
    //Prints first letter in uppercase
    printf("%c", toupper(name[0]));
    
    for(int i = 0, n = strlen(name); i < n; i++)
    {
        
        //Checks for spaces and end of chars
        if(name[i] == ' ' && name[i+1] !='\0')
        {

        printf("%c",toupper(name[i+1]));
        i++;
        
        }
    }
    printf("\n");
}
