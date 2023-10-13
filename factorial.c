#include <stdio.h>

int main (void) {

    int boton;
    int numero;
    int residuo;
    int cociente;
    int contador;
    int expo;
    int total;
    int factorial;
    factorial = 1;
    int palindromo;
    int inicial;
    palindromo = 0;

    do {
        printf ("Bienvenido al menu de calculo \n");
        printf ("Ingrese 1 para calcular el factorial de un numero (for) \n");
        printf ("Ingrese 2 para calcular el factorial de un numero (while) \n");
        printf ("Ingrese 3 para calcular el factorial de un numero (do-while) \n");
        printf ("Ingrese 4 para calcular el palindromo \n");
        printf ("Ingrese 5 para calcular si un numero es armstrong \n");
        printf ("Ingrese 6 para salir \n");
        scanf ("%d", &boton);

        switch (boton) {
            case 1:
            printf("Factorial con for \n");
            printf ("Ingrese un numero \n");
            scanf ("%d", &numero);
            if (numero < 0) 
            printf ("Numero equivocado, ingrese un numero positivo \n");
            else {
                for ( contador = 1; contador <= numero; contador= contador +1) {
                    factorial = contador * factorial;
                }
                printf ("El factorial va hacer igual a: ");
                printf ("%d \n", factorial);
            }


            break;
            case 2:
            printf ("Factorial con while \n");
            printf ("Ingrese un numero \n");
            scanf ("%d", &numero);
            if (numero < 0) 
            printf ("Numero equivocado, ingrese un numero positivo \n");
            else {
            while (numero != 0)
            {
                factorial= numero * factorial;
                numero = numero -1;
            }          
            }
            printf ("El factorial va hacer igual a: ");
            printf ("%d \n", factorial);

            break;
            case 3:
            factorial = 1;
            printf ("Factorial con do-while \n");
            printf ("Ingrese un numero \n");
            scanf ("%d", &numero);
            if (numero < 0) 
            printf ("Numero equivocado, ingrese un numero positivo \n");
            else {
            do {                
                factorial= numero * factorial;
                numero = numero -1;
            } while (numero != 0);
            }
            printf ("El factorial va hacer igual a: ");
            printf ("%d \n", factorial);

            break;
            case 4:
            printf ("Calcular palindromo \n");
            printf ("Ingrese un numero \n");
            scanf ("%d", &numero);
            inicial = numero;
           do {
            cociente = numero / 10;
            residuo = numero % 10;
            palindromo = palindromo*10 + residuo;
            } while ( cociente != 0);

            if (palindromo == inicial){ 
                printf ("Si es un numero armstrong \n");
            }    else {
                printf ("No es un numero armstrong \n");
            }
            break;

            case 5:
            printf ("Armstrong \n");
            printf ("Ingrese un numero \n");
            scanf ("%d", &numero);
            int inicial2 = numero;
            total = 0;
            do {
            cociente = numero / 10;
            residuo = numero % 10;
            expo = residuo * residuo * residuo;
            total = expo + total;       
            numero = cociente;

            } while ( cociente != 0);
             if (total == inicial2) 
                printf ("Si es un numero armstrong \n");
                else {
                printf ("No es un numero armstrong \n");
            }
            break;

            case 6: 
            printf ("Gracias por usar \n"); 
            break;
            default:
            printf ("Numero equivocado, ingrese de nuevo \n");
            break;
        }
    } while (boton != 6);


    return 0;
}