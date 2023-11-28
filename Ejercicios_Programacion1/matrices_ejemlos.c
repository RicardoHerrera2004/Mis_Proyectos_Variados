#include <stdio.h>

int main()
{

    int matriz[3][3];
    int suma = 0;
    int vertical[3];
    int horizontal[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese un numero para el espacio de la matriz de la fila %d y columna %d \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        suma = 0;
        for (int j = 0; j < 3; j++)
        {
            suma = matriz[i][j] + suma;
        }
        vertical[i] = suma;
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("El resultado de la columna %d es igual a : %d \n", i, vertical[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        suma = 0;
        for (int j = 0; j < 3; j++)
        {
            suma = matriz[j][i] + suma;
        }
        horizontal[i] = suma;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("El resultado de la fila %d es igual a : %d \n", i, horizontal[i]);
    }
    return 0;
}