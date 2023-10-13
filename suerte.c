#include <stdio.h>
#include <string.h>
int main (void){
int dia,mes,año,numero,digito1,digito2,digito3,digito4,numerodelasuerte;
char respuesta[3] ;
do
{   
    printf("Ingrese su dia de nacimiento \n");
    scanf("%d",&dia);
while (dia<=0 || dia>31 )
{
    printf("El dia ingresado es incorrecto por favor ingrese uno nuevo\n");
    scanf("%d",&dia);
}
    printf("Ingrese el mes de su nacimiento \n");
    scanf("%d",&mes);
while (mes<=0 || mes>12 )
{
    printf("El mes ingresado es incorrecto por favor ingrese uno nuevo\n");
    scanf("%d",&mes);
}
    printf("ingrese su año de nacimiento\n");
    scanf("%d",&año);
    while (año<=0 || año>2023 )
    {
        printf("El año ingresado no es valido por favor ingrese uno nuevo\n");
          scanf("%d",&año);
    }
    numero=dia+mes+año;
    digito1=numero%10;
    digito2=(numero/10)%10;
    digito3=(numero/100)%10;
    digito4=(numero/1000)%10;
    numerodelasuerte=digito1+digito2+digito3+digito4;
    if (numerodelasuerte>10)
    {
    numerodelasuerte=(numerodelasuerte%10)+(numerodelasuerte/10)%10;
    }
    
    printf("Tu numero de la suerte es--->%d:\n",numerodelasuerte);
    printf("Desea ingresar otra fecha? Si o No\n");
    scanf("%s",respuesta);
} while (strcmp(respuesta, "Si") == 0 || strcmp(respuesta, "si") == 0);

}