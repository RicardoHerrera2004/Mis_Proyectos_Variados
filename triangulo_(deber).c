#include <stdio.h>
#include <math.h>
#define Pi 3.1415

int main (void) {
    float cateto1;
    float cateto2;
    float hipotenusa;
    float angulo1;
    float angulo2;
    float angulo3 = 90;
    int choose;
    float radianes;
    float seno;

    do {
    printf ("¿Desea ingresar 1 o 2 catetos? \n");
    scanf ("%d", &choose);
    switch (choose)
    {
    case 1:
        printf ("Ingrese el valor de un solo cateto \n");
        scanf ("%f", &cateto1);
        printf ("Ingrese un angulo \n");
        scanf ("%f", &angulo1);
        radianes = angulo1*(Pi/180);
        seno=sin(radianes);
        hipotenusa=cateto1/seno;
        cateto2 = sqrt (pow(hipotenusa,2)-pow(cateto1,2));

        break;
    case 2:
        printf ("Ingrese el valor de un cateto \n");
        scanf ("%f", &cateto1);
        printf ("Ingrese el valor del segundo cateto \n");
        scanf ("%f", &cateto2);
        printf ("Ingrese un angulo \n");
        scanf ("%f", &angulo1);
        hipotenusa = sqrt (pow(cateto1,2)+pow(cateto2,2));

        break;
    default:
        printf ("Valor invalido \n");
        break;
    }
    } while (choose != 2 && choose != 1); 

    angulo2=180-angulo3-angulo1;
    printf ("El valor del primer angulo es: ");
    printf ("%.2f \n", angulo1);
    printf ("El valor del segundo angulo es: ");
    printf ("%.2f \n", angulo2);
    printf ("El valor del tercer angulo es: ");
    printf ("%.2f \n", angulo3);
    printf ("El valor del primer cateto es: ");
    printf ("%.2f \n", cateto1);
    printf ("El valor del segundo cateto es: ");
    printf ("%.2f \n", cateto2);
    printf ("El valor de la hipotenusa es: ");
    printf ("%.2f \n", hipotenusa);
    
    return 0;
}