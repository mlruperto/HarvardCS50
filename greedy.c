/*
    greedy.c
    
    Michael Ruperto michaelruperto@hotmail.com
    
    pset 1 greedy solution, change creation
    
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUAT 25;
#define DIME 10;
#define NICK 5;

int main(void){
    //Variables
    float given_amnt = 0;
    int cent_amnt = 0;
    int quat_amnt = 0;
    int dime_amnt = 0;
    int nick_amnt = 0;
    int left_amnt = 0;
    int coin_amnt = 0;
    
    do{
        printf("I received:");
        given_amnt = GetFloat();
    
        if(given_amnt == 0 || given_amnt <= 0)
        printf("Number does not compute try again:\n");
    }
    while(given_amnt <= 0);
        //Convert to cents
        cent_amnt = (int)round(given_amnt*100);
        
        //Quarters
        quat_amnt = cent_amnt / QUAT;
        left_amnt = cent_amnt % QUAT;
        
        //Dimes
        dime_amnt = left_amnt / DIME;
        left_amnt = left_amnt % DIME;
        
        //Nickels
        nick_amnt = left_amnt/NICK;
        left_amnt = left_amnt%NICK;
        
        //Count coins
        coin_amnt = (quat_amnt + dime_amnt + nick_amnt + left_amnt);
        
        printf("%d\n", coin_amnt);
        return 0;
        
}
        
