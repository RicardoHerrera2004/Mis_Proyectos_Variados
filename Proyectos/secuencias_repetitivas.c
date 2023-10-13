#include <stdio.h>

int main (void) {

    int x;
    int y=0;

    for (int x = 0; x <= 10; x++)
    {
        printf ("El numero es: %d \n", x);
    }
    
    do
{
    x=x+1;
    printf ("El numero es: %d \n", x);
} while (x <10);

    while (y<=10)
    {
        y=y+1;
        printf ("El numero es: %d \n", y);
    }
    
    return 0;
}


