#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Height: ");
    while(n <= 0 || n > 8) {
        n = get_int("Height: ");
    }

    for(int i = 0; i < n; i++) {
        for(int w = n; w > i + 1; w--) {

            printf(" ");
        }
        for(int w = 0; w <= i; w++) {
            printf("#");
        }
        printf("\n");
    }
}
