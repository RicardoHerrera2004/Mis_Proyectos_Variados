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
    int opcion;
    int rio;
    int pelea;
    int vida = vida_max;
    int hambre = hambre_min;
    int sed = sed_min;
    int dia = dia_min;
    int prob;
    int mono;
    int jerin;
    
    do
    {
        printf ("BIENVENIDO AL SURVIVAL. \n");
        printf ("Oprima 1 para iniciar \n");
        printf ("Oprima 2 para ver los creditos. \n");
        printf ("Oprima 3 para salir. \n");
        scanf ("%d", &iniciar);
        switch (iniciar)
    {
    case 1:
        printf ("BIENVENIDO A LA ISLA \n");
        printf ("15 de mayo de 2222... \n");
        printf ("Estas de viaje hacia Madagascar pero lamentablemente una tormenta electrica hace que tu avion caiga de picado hacia una isla muy lejana a tu destino (Madagascar). Parece ser que eres el ultimo sobreviviente de toda la tripulacion del avion y tu objetivo actual es sobrevivir el mayor tiempo posible en esta isla hasta que alguien (O algo...) te venga a rescatar. \n");
        printf ("Tendras 5 opciones para hacer en la isla, buscar agua, buscar comida, buscar suplementos (Para ver si encuentras algo que te ayude), no hacer nada o descansar, cada accion te tomara un dia realizarla, muchas suerte \n");
        printf ("Lo primero que haces es mantenerte en la orilla, sin addentrarte mucho al interior de la isla, y juntar algunas rocas para hacer un mensaje de SOS en el suelo \n");
        printf ("Las reglas de supervivencia son simples. Tendras 100 puntos de vida, si llega a 0, moriras y acabara el juego (Es obvio no). Tambien tendras puntos de hambre y sed, empiezas con 0 y cada que pase el un dìa (Una accion) subira 10 de hambre y 20 de sed. Si llega a 100 tu hambre o tu sed, empezaras a perder vida \n");
        printf ("Suerte en tu aventura \n");

        do 
        {
     
        if (vida > vida_max)
        {
            vida = 100;
        }
        if (hambre > hambre_max)
        {
            hambre = 100;
        }
        if (hambre < hambre_min)
        {
            hambre = 0;
        }
        if (sed > sed_max)
        {
            sed = 100;
        }
        if (sed < sed_min)
        {
            sed = 0;
        }

        hambre >= hambre_min && hambre <= hambre_max;
        sed >= sed_min && sed <= sed_max;
        printf ("VIDA ACTUAL: %d \n", vida);
        printf ("HAMBRE ACTUAL: %d \n", hambre);
        printf ("SED ACTUAL: %d \n", sed);
        printf ("DIA ACTUAL:  %d \n", dia);
        
        prob = rand() % 100;
       
        if (hambre >= hambre_max)
        {
            printf ("Ojo, te estas muerindo de hambre, seria buena idea que buscaras algo de comer... \n");
            printf("(Empezaras a perder 10 de vida hasta que no baje tu nivel de hambre...) \n");
            vida -= 10;
        }        

        if (sed >= sed_max)   
        {
            printf ("Ojo, te estas mueriendo de sed, seria buena idea que buscaras algo de tomar... \n");
            printf("(Empezaras a perder 10 de vida hasta que no baje tu nivel de sed...) \n");
            vida -= 20;
        } 

            printf ("<Para buscar agua. Oprima 1> \n");
            printf ("<Para encontrar algo de comida. Oprima 2> \n");
            printf ("<Para buscar en suplementos. Oprima 3> \n");
            printf ("<Para no hacer nada. Oprima 4> \n");
            printf ("<Para descansar. Oprima 5> \n");
            scanf ("%d", &opcion);
            switch (opcion)
        {
        case 1:
            printf ("BIENVENIDO A LA BUSQUEDA DEL AGUA \n");
            hambre += 10;
            sed += 20;
            dia += 1;

            if (prob < 5 && prob >= 0)
            {
                printf ("Encontraste agua envenenada, (Que mala suerte...). PIERDES 5 DE VIDA \n");
                sed -=5;
                vida -= 5;
            }
            if (prob < 20 && prob >= 5) 
            {
                printf ("Encontraste un pozo lleno de agua, Enhorabuena! RECUPERAS 35 DE SED \n");
                sed -= 30;
            }
            if (prob < 40 && prob >= 20)
            {
                printf ("Encontraste una botella de agua. RECUPERAS 25 DE SED \n");
                sed -= 20;
            }
            if (prob < 60 && prob >= 40)
            {
                printf ("Llegaste a un rio \n");
                printf ("¿Que vas hacer? \n");
                do
                {
                printf ("<Para beber del rio. Oprima 1> \n");
                printf ("<Para recoger el agua y purificarla. Oprima 2> \n");
                printf ("<Para irte del rio. Oprima 3> \n");
                scanf ("%d", &rio);
                switch (rio) 
                {
                    case 1:
                    printf ("Bebiste del rio. RECUPERAS 5 DE SED \n");
                    sed -= 10;
                    break;

                    case 2:
                    printf ("Recogiste agua y la purificaste. RECUPERAS 20 DE SED \n");
                    sed -=20;
                    break;

                    case 3:
                    printf ("Te fuiste del rio (No se porque no hiciste nada...). NO PASA NADA \n");
                    break;

                    default:
                    printf ("Numero invalido, intente de nuevo \n");
                    break;
                }
                } while (rio != 3 && rio != 2 && rio != 1);
            }
            if (prob < 80 && prob >= 60 )
            {
                printf ("Encontraste frutas con nectar. RECUPERAS 22 DE SED  Y RECUPERAS 5 DE HAMBRE \n");
                sed -= 22;
                hambre -= 5;
            }
            if (prob >= 80 && prob <= 100)
            {
                printf ("Encontraste un coco y lo bebiste. RECUPERAS 22 DE SED \n");
                sed-= 22;
            }
            break;

        case 2:
            printf ("BIENVENIDO A LA BUSQUEDA DE COMIDA \n");
            hambre += 10;
            sed += 20;
            dia += 1;

            if (prob < 5 && prob >= 0)
            {
                printf ("Encontraste carne podrida (De donde salio eso...). RECUPERAS 5 DE HAMBRE \n");
                hambre -= 5;
            }
            if (prob < 20 && prob >= 5)
            {
                printf ("Encontraste insectos (No creo que sea buena idea comerlos...). RECUPERAS 22 DE HAMBRE Y TE DIO CIERTO DISGUSTO... \n");
                hambre -= 22;
            }
            if (prob < 40 && prob >= 20)
            {
                printf ("Encontraste un mono salvaje (Parece inofensivo...)\n");
                do {
                    printf ("¿Que vas hacer con el mono? \n");
                    printf ("<Para asesinarlo (Que mala gente...). Oprima 1> \n");
                    printf ("<Para dejarlo en libertad. Oprima 2> \n");
                    scanf ("%d", &mono);
                switch (mono)
                {
                case 1:
                    printf ("Has asesinado al mono... RECUPERAS 30 DE HAMBRE \n");
                    hambre -= 30;
                    break;
                
                case 2:
                    printf ("Has dejado en libertad al mono (Eres una buena personas). NO PASA NADA \n");
                    break;
                
                default:
                    printf ("Numero invalido, intente de nuevo \n");
                    break;
                }
                } while ( mono != 1 && mono != 2);
            
            }
            if (prob < 60 && prob >= 40)
            {
                printf ("Te encontraste un dragon de Komodo (¿Hay dragones de Komodo en Madagascar?) \n");
                printf ("Has logrado acabar con el dragon de Komodo, pero te hizo daño. PIERDES 10 DE VIDA Y RECUPERAS 35 DE HAMBRE \n");
                vida -= 10;
                hambre -= 35;
            }
            if (prob < 80 && prob >= 60)
            {
                printf ("Encontraste fruta silvestre. RECUPERAS 22 DE HAMBRE \n");
               hambre -= 22;
            }
            if (prob <= 100 && prob >= 80)
            {
                printf ("Pescaste algo en el mar. RECUPERAS 25 DE HAMBRE \n");
                hambre -= 25;
            }
            break;

        case 3:
            printf ("BIENVENIDO A LA BUSQUEDA DE SUPLEMENTOS \n");
            hambre += 10;
            sed += 20;
            dia += 1;

            if (prob >= 0 && prob < 10)
            {
                printf ("Encontraste una jeringuilla. (¿Sera buena idea usarlo?) \n");
                do
                {
                    printf ("¿Quieres usarla? \n");
                    printf ("<Para usarla. Oprima 1> \n");
                    printf ("<Para dejarlo en el suelo. Oprima 2> \n");
                    switch (jerin)
                    {
                    case 1:
                        printf ("Usaste la jernguilla (No creo que fue una gran idea). PIERDES 3 DE VIDA \n");
                        vida -= 3;
                        break;
                    case 2:
                        printf ("Dejaste la jeringuilla en el suelo (Mas vale prevenir que lamentar). NO PASA NADA \n");
                        break;
                    default:
                        printf ("Numero invalido, intente de nuevo \n");
                        break;
                    }
                } while (jerin != 1 && jerin != 2);
            }
            if (prob >= 10 && prob < 15)
            {
                printf ("Encontraste suplementos medicos (¿De donde aparecieron?). RECUPERAS 20 DE VIDA \n");
                vida += 20;
            }
            if (prob >= 15 && prob < 45)
            {
                printf ("Encontraste savila por la isla (¿Te puede curar la savila?). RECUPERAS 15 DE VIDA \n");
                vida += 15;
            }
            if (prob >= 45 && prob <= 100)
            {
                printf ("No lograste encontrar nada...");
            }
            break;

        case 4:
            printf ("BIENVENIDO A LA OPCION DE NO HACER NADA (no se porque seleccionaste esta opcion...) \n");
            hambre += 10;
            sed += 20;
            dia += 1;
            if (prob >= 0 && prob < 3)
            {
                printf ("No puedo creerlo, te has encontrado con un atun, lees la etiqueta y logras apreciar que dice propiedad del CHINO. NO PASA NADA\n");
                hambre = 0;
            }
            if (prob >=3 && prob < 6)
            {
                printf ("No puedo creerlo, te has encontrado una fritada lojana (Sabe a perro...). El perro era propiedad de un tal Johan, NO PASA NADA \n");
                hambre = 0;
            }
            if (prob >=6 && prob < 9)
            {
                printf ("No lo puedo creer, has encontrado una almohada de cuello con una etiqueta del supuesto dueño que dice: FREE FORNITE!. NO PASA NADA \n");
            }
            if (prob >= 9 && prob < 12)
            {
                printf ("No lo puedo creer, te has encontrado una multa de $45, parece que el propietario de esa multa (Que no pago) se llama Mateo Velasco. NO PASA NADA \n");
            }
            if (prob >= 12 && prob < 15)
            {
                printf ("Te encontraste con unos AirPods con diseño de SuperMarioBros (¿De quien serian?). NO PASA NADA \n");
            }
            if (prob >= 15 && prob < 18)
            {
                printf ("Te encontraste una botella de cerveza, el supuesto dueño parece ser alguien llamado Joel, te bebes lo que sobro de la cerveza y te dio demasiada sed. TE DA 50 DE SED \n");
                sed += 50;
            }
            if (prob >= 18 && prob < 21)
            {
                printf ("No lo puedo creer, te has encontrado un par de medias de diseño de tacos (una media esta rota...), te las pones y son muy abrigadas. RECUPERAS 30 DE VIDA \n");
                vida += 30;
            }
            if (prob >= 21 && prob < 24)
            {
                printf ("No puedo creer, te has encontrado la famosa gorra azul de un tal Patrick Saa, te la pones y te quita la sed. RECUPERAS 30 DE SED \n");
                sed -= 30;
            }

            break;

        case 5:
            printf ("BIENVENIDO AL DESCANSO \n");
            hambre += 10;
            sed += 20;
            dia += 1;

            printf ("Dulces sueños. RECUPERAS 10 DE VIDA. \n");
            vida += 10;
            break;

        default:
            printf ("Numero invalido, ingrese de nuevo \n");
            break;
        } 
        
        } while (vida > vida_min && dia < dia_max);
        
        if (vida <= vida_min)
        {
            printf ("Lastima, no lograste sobrevivir. \n");
            
        }
        if (dia == dia_max)
        {
            printf ("Lo lograste, el avion llego y lograste sobrevivir \n");
            printf ("FELICIDADES! \n");
        }
        vida = vida_max;
        hambre = hambre_min;
        sed = sed_min;
        dia = dia_min;
    break;
    
    case 2: 
        printf ("CREDITOS \n");
        printf ("Hecho por: Ricardo Herrera \n");
        break;

    case 3:
        printf ("Gracias por jugar \n");
        break;

    default:
        printf ("Numero invalido, intente de nuevo \n");
        break;
    }
    } while (iniciar!=3);
    
    return 0;
}