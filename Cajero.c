#include <stdio.h>
#include <string.h>

int main (void) {

    char User_Ingreso [20];
    char User_Comparar [20];
    int pass;
    int pass2;

    printf ("Registre su nombre de usuario ");
    scanf ("%s", User_Ingreso);
    printf ("Registre su contraseña ");
    scanf ("%d", &pass);

    printf ("Ingrese su usuario previamente registrado ");
    scanf ("%s", User_Comparar);
    printf ("Ingrese la contraseña previamente creada ");
    scanf ("%d", &pass2);
    
    while ((User_Ingreso != User_Comparar) && pass != pass2)
    {
        printf ("Ingreso fallido, intente de nuevo \n");
        printf ("Ingrese su usuario previamente registrado ");
        scanf ("%s", User_Comparar);
        printf ("Ingrese la contraseña previamente creada ");
        scanf ("%d", &pass2);
    }
    
    if (strcmp (User_Ingreso, User_Comparar) == 0 && pass == pass2)
    {
        printf ("Ingreso con exito");
        
    }
   
    return 0;
}
