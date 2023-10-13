#include <stdio.h>

int main (void) {

    int votos, candidato1=0, candidato2=0, candidato3=0, candidato4=0, candidato5=0;
    float porc1, porc2, porc3, porc4, porc5, candidatostotal;

    printf ("Bienvenido al conteo de votos de los candidatos. \n");
    printf ("Ingresar 1: Para el primer candidato \n");
    printf ("Ingresar 2: Para el segundo candidato \n");
    printf ("Ingresar 3: Para el tercer candidato \n");
    printf ("Ingresar 4: Para el cuarto candidato \n");
    printf ("Ingresar 5: Para el quinto candidato \n");
    printf ("Ingresar 0: Para salir. \n");
    do {
    printf ("Ingrese el numero: ");
    scanf ("%d", &votos);
    switch (votos)
    {
    case 1:
        printf ("Un voto para el primer candidato. \n");
        candidato1=candidato1+1;
        break;
    case 2:
        printf ("Un voto para el segundo candidato. \n");
        candidato2=candidato2+1;
        break;
    case 3:
        printf ("Un voto para el tercer candidato. \n");
        candidato3=candidato3+1;
        break;
    case 4:
        printf ("Un voto para el cuarto candidato. \n");
        candidato4=candidato4+1;
        break;
    case 5:
        printf ("Un voto para el quinto candidato. \n");
        candidato5=candidato5+1;
        break;
    case 0:
        printf ("Gracias por votar. \n");
        break;
    default:
        printf ("Numero invalido. \n");
        break;
    }} while (votos!=0);

    candidatostotal=candidato1+candidato2+candidato3+candidato4+candidato5;
 
    printf ("Para el primer candidato se registro los siguientes votos: %d \n", candidato1);
    printf ("Para el segundo candidato se registro los siguientes votos: %d \n", candidato2);
    printf ("Para el tercer candidato se registro los siguientes votos: %d \n", candidato3);
    printf ("Para el cuarto candidato se registro los siguientes votos: %d \n", candidato4);
    printf ("Para el quinto candidato se registro los siguientes votos: %d \n", candidato5);
    printf ("El total de votos es: %.0f \n", candidatostotal);
    porc1=candidato1/candidatostotal*100;
    porc2=candidato2/candidatostotal*100;
    porc3=candidato3/candidatostotal*100;
    porc4=candidato4/candidatostotal*100;
    porc5=candidato5/candidatostotal*100;
    printf ("El porcentaje del primer candidato es: %.2f \n", porc1);
    printf ("El porcentaje del segundo candidato es: %.2f \n", porc2);
    printf ("El porcentaje del tercer candidato es: %.2f \n", porc3);
    printf ("El porcentaje del cuarto candidato es: %.2f \n", porc4);
    printf ("El porcentaje del quinto candidato es: %.2f \n", porc5);
    
    return 0;
}