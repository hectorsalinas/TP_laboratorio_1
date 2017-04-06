#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0, datoA=0,datoB=0;// las variables datoA y datoB son para ingresar los datos, luego la del contador que inicia en 0 para luego ir incremetadose en 1 por iteracion realizada en las operaciones

    while(seguir=='s')
    {

        printf("\n1- Ingresar 1er operando (A=%d)\n",datoA);
        printf("2- Ingresar 2do operando (B=%d)\n",datoB);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("\n\nOpcion: ");
        fflush(stdin);
        scanf("%d",&opcion);
        opcion=ValEntero(opcion, 0, 9);

        switch(opcion)
        {
            case 1:
            	 printf("\ningrese valor A= ");
            	 scanf("%d",&datoA); // en case 1 y 2 se cargan las variables a utilizar

                break;
            case 2:
            	 printf("\ningrese valor B= ");
            	 scanf("%d",&datoB);
                break;

            case 3:
                Suma(datoA, datoB);//  llama a la funcion y se le cargan las variables para el calculo, la funcion no devuelve nada solo calcula y imprime por pantalla
                getch();
                break;

            case 4:
            	Resta(datoA,  datoB); // llama a la funcion, no devuelve nada
            	getch();
                break;

            case 5:
                 // validar que el divisor no sea 0, llama a la funcion, no devuelve nada
                 datoB=ValIntCero(datoB);
            	 Divicion(datoA, datoB);
            	 getch();
                break;

            case 6:
            	 Multiplicacion(datoA,datoB); // llama a la funcion, no devuelve nada
            	 getch();
                break;

            case 7:
                //llama a la funcion factorial elegida, se deja activa la que puede procedar factoriales superior a las que soporta int
                Factorial(datoA); // llama a la funcion, no devuelve nada
                 //printf("\nEl factorial de %d! = %d\n",datoA,FactorialDeClase(datoA));
                 getch();
                break;

            case 8: //imprime todas las operaciones.
                Suma(datoA, datoB);
                Resta(datoA,  datoB);
                datoB=ValIntCero(datoB);
                Divicion(datoA, datoB);
                Multiplicacion(datoA,datoB);
                Factorial(datoA);
                getch();
                break;

            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
