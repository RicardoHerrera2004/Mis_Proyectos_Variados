#include <stdio.h>
#include <strings.h>

int main (void) {

    char usuario1 [30] = "Josefino";
    int contraseña1 = 1234;
    char usuario2 [30] = "Julian";
    int contraseña2 = 1111;
    char usuario3 [30] = "Maestro";
    int contraseña3 = 2004;
    char usuario [30];
    int contraseña;
    int opcion_ventas, opcion_peli, opcion_sala;

    for (int i = 3; i > 0; i--)
    {
        printf ("Ingrese el usuario: ");
        scanf ("%s", usuario);
        printf ("Ingrese la contraseña: ");
        scanf ("%d", &contraseña);
        
        if (strcmp (usuario, usuario1)== 0 && contraseña == contraseña1 || strcmp (usuario, usuario2)==0 && contraseña==contraseña2 || strcmp (usuario, usuario3)==0 && contraseña==contraseña3)
        {
            printf ("Ingreso correcto \n");
            do
            {
                printf ("Seleccione el menu de opciones. \n");
                printf ("Oprima 1 para la venta de entradas. \n");
                printf ("Oprima 2 para las estadisticas de venta. \n");
                printf ("Oprima 3 para salir. \n");
                scanf ("%d", &opcion_ventas);
                switch (opcion_ventas)
                {
                case 1:
                    printf ("Venta de entradas. \n");
                    break;
                case 2:
                    printf ("Estadisticas de entradas. \n");
                    break;
                case 3:
                    printf ("Gracias por usar. \n");
                    break;
                default:
                    printf ("Numero invalido. \n");
                    break;
                }
            } while (opcion_ventas!=3);
            break;
        }
        else
        {
            printf ("Usuario o contraseña incorrecta. \n");
        }
        
        if (i == 1)
        {
            printf ("Imposible el ingreso. \n");
        }
        
    }
    
    return 0;
}