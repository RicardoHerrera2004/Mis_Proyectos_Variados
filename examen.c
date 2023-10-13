#include <stdio.h>
#include <string.h>

int main (void) {

    float totalfrutas;
    float lote;
    int n_mala = 0;
    int n_madura = 0;
    int n_pasada = 0;
    char condicion[20]; 
    float porc_mala;
    float porc_madura;
    float porc_pasada; 
    float porc_lote;


    printf ("Bienvenido a la fruteria \n");
    printf ("Ingrese el numero de su lote \n");
    scanf ("%f", &lote);

    

   
        do {
        printf ("Ingrese la condicion de la frura (mala, pasada, madura) y terminar para dejar de ingresas \n");
        scanf ("%s", condicion);
       
        if (strcmp (condicion, "mala") == 0)
        {
            n_mala = n_mala +1;
        } else if (strcmp (condicion, "pasada") == 0)
        {
            n_pasada = n_pasada +1;
        } else if (strcmp (condicion, "madura") == 0)
        {
            n_madura = n_madura +1;
        } else if (strcmp (condicion, "terminar") ==0)
        {
            
        } else {
        printf ("Este caracter es incorrecto, ingrese mala, pasada, madura o terminar \n");}


    } while (strcmp (condicion, "terminar")!= 0);

    totalfrutas = n_madura + n_mala + n_pasada;
    porc_mala = (n_mala /totalfrutas) *100;
    porc_madura = (n_madura/totalfrutas) *100;
    porc_pasada = (n_pasada/totalfrutas) *100;

    printf ("El total de frutas es: %.2f \n",  totalfrutas);
    printf ("El total de frutas malas es: %d", n_mala);
    printf (" y el porcentaje es: %.2f \n", porc_mala);
    printf ("El total de frutas maduras es: %d", n_madura);
    printf (" y el porcentaje es: %.2f \n", porc_madura);
    printf ("El total de frutas pasadas es: %d", n_pasada);
    printf (" y el porcentaje es: %.2f \n", porc_pasada);

    if (porc_mala + porc_pasada >= 30){
        printf ("No compres el lote \n");
    }else if (porc_mala + porc_pasada > 15 && porc_mala + porc_pasada < 30) { 
        printf ("El lote va a hacer igual a: %.2f \n", lote*0.7);
    }
    else if (porc_mala > 5  && porc_pasada > 5) {
        printf ("El lote va a hacer igual a: %.2f \n", lote*0.8);
    }
    else {
        printf ("El lote va a hacer igual a: %.2f", lote);
    }
    return 0;
}