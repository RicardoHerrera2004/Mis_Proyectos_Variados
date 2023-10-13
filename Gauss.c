#include <stdio.h>

int main (void) {

    int numero;
    int i;

    do
    {
    printf ("Ingrese un numero: ");
    scanf ("%d", &numero);
    if (numero<0)
    {
        printf ("Numero invalido, ingrese de nuevo \n");
    }
    
    } while (numero<0);

    
    for (i = 0; i < 0; i++)
    {
        numero=numero+1;
    }

    printf ("Su numero es: %d", numero);
    

    return 0;
}