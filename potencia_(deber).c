#include <stdio.h>

int main (void) {

    int potencia;
    int base;
    float resultado;

    printf ("Ingrse la base: ");
    scanf ("%d", &base);
    printf ("Ingrese la potencia: ");
    scanf ("%d", &potencia);

    if (potencia<0)
    {
            for (resultado = 1; potencia < 0; potencia++)
        {
            resultado = resultado * 1/base;
        }
    }
    else
    {
            for (resultado = 1; potencia > 0; potencia--)
        {
            resultado = resultado * base;
        }
    }
            
    printf ("El resultado es igual a: ");
    printf ("%.2f", resultado);

    return 0;
}