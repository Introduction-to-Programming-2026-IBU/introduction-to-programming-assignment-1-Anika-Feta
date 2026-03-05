#include <cs50.h>
#include <stdio.h>

int main(void){

    int c = get_int("Change owed: ");
    //The program promts the user for the number of change they owe

    int a = 0;
    //I made an integer for the number of answers it gets to tell us the amount of coins that will be given

    while(c > 0 && c >= 25) {
        c -= 25;
        a++;
    }
    //This is the while loop that calculates the quarters used
    while(c > 0 && c >= 10) {
        c -= 10;
        a++;
    }
    //This is the while loop that calculates the dimes used
    while(c > 0 && c >= 5) {
        c -= 5;
        a++;
    }
    //This is the while loop that calculates the cents used
    while(c > 0 && c >= 1) {
        c -= 1;
        a++;
    }
    //This is the while loop that calculates the pennies used
    printf("%i\n", a);
    //Here it prints the number of coins aka the number of answers it got
}
