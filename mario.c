/*
    mario.c

    Michael Ruperto michaelruperto@hotmail.com
    
    pset1 mario solution
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Declare variable for pyramid height
    int p_height = 0;
    
    //Grab user input
    do{
        printf("Height:");
        p_height = GetInt();
        if (p_height == 0){
            return 0;
        }
    }
    while (p_height < 1 || p_height > 23);
    //Inner loop for spaces and hashs
    //Outer loop for the count of rows
    
    for(int i = 0; i < p_height; i++){
        for(int j = 0; j < p_height-i-1; j++){
            printf("%s", " ");
        }
        for(int q = 0; q < i+2; q++){
            printf("#");
            }
        printf("\n");
    }return 0;
}
