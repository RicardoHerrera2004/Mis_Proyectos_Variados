#include <stdio.h>
#include <string.h>
#define dia_max 30
#define dia_min 0
#define vida_min 0
#define vida_max 100
#define hambre_max 100
#define hambre_min 0
#define sed_max 100
#define sed_min 0

int main (void) {

    int iniciar;


    do 
    {
        printf ("BIENVENIDO AL SURVIVAL \n");
        printf ("<Oprima 1 para INICIAR> \n");
        printf ("<Oprima 2 para CREDITOS> \n");
        printf ("<Oprima 3 para SALIR> \n");
        scanf ("%d", &iniciar);

        switch (iniciar)
        {
            case 1:
                printf ("15 de mayo de 2025... \n");
                printf ("BIENVENIDO A LA ISLA \n");
                printf ("Estas de viaje de luna de miel con tu novia, vas volando en un avion privado hacia Madagascar, pero lamentablemente el conductor del avion se duerme (Estaba pasando por momentos de tension y depresion muy altos) y se estrellan en una isla y solo sobrevives tu, tu novia, lamentablemente fallece al igual que el conducor \n");
                printf ("Tu objetivo actual es encontrar todo tipo de suplementos en la isla que te ayuden a sobrevivir el mayor tiempo posible antes de que alguien llegue a rescatarte \n");
                printf ("Lo primero que haces es mantenerte en la orilla, sin addentrarte mucho al interior de la isla, y juntar algunas rocas para hacer un mensaje de SOS en el suelo \n");
                printf ("Se te mostrara el hambre y sed en pantalla, si alguna de las dos llega o supera los 100 puntos, perderas vida de a poco (morir de hambre: -10 de vida y morir de sed: -20 de vida) \n");

                do 
                {

                } while (vida <= 0)
                break;

            case 2:
                printf ("CREDITOS  \n");
                printf ("Hecho por: Ricardo Herrera \n");
                break;

            case 3:
                printf ("Gracias por jugar <3 \n");
                break;

            default:
                printf ("Numero invalido, intente de nuevo \n");
                break;
        }
    } while (iniciar !=3);

    return 0;
}