#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

/** \brief Valida valores con un valor minimo y maximo retorna valor valido
 *
 * \param entra valor int Variable
 * \param int VariableMin
 * \param int VariableMax
 * \return Variable
 *
 */
int ValEntero(int Variable, int VariableMin, int VariableMax)
{
    while(Variable<VariableMin || Variable>VariableMax)
    {
         printf("\nError debe ingresar valor entre %d y %d: ",VariableMin, VariableMax);
         scanf("%d",&Variable);
    }
    return Variable;
}


/** \brief entran valors enteros y muestra por pantalla la divicion devuelve void
 *          se lo pasa los valores ingresados enteros a float para poder realizar el calculo
 * \param int VariableA
 * \param int VariableB
 * \return void
 *
 */
void Divicion(int VariableA, int VariableB)
{   float result; // se utiliza float para que muestre resultados fraccionarios

    result = (float) VariableA /  (float) VariableB; //uso la mascara (float) para el block para poder realizar la operacion de lo contrario da resultado 1 y no da la fracciones

    printf("\n%d / %d = %.2f \n", VariableA,VariableB, result);// se limita el resultado de fraccion a 2 caracteres luego de la coma
   // return 0;
}


/** \brief entran valors enteros y muestra por pantalla la mutiplicacion, devuelve void
 *
 * \param int VariableA
 * \param int VariableB
 * \return void
 *
 */
void Multiplicacion(int VariableA, int VariableB)
{
    printf("\n%d * %d = %d\n", VariableA,VariableB, VariableA * VariableB);
   // return 0;
}


/** \brief entran valors enteros y muestra por pantalla la resta, devuelve void
 *
 * \param int VariableA
 * \param int VariableB
 * \return void
 *
 */
void Resta(int VariableA, int VariableB)
{
    printf("\n%d - %d = %d\n", VariableA,VariableB, VariableA - VariableB);
   // return 0;
}


/** \brief entran valors enteros y muestra por pantalla la suma, devuelve void
 *
 * \param int VariableA
 * \param int VariableB
 * \return void
 *
 */
void Suma(int VariableA, int VariableB)
{
    printf("\n%d + %d = %d\n",VariableA, VariableB,VariableA+VariableB);
   // return 0;
}
/** \brief entran valor enteros y muestra por pantalla resultado pasados double para procesar factorial de mas valor que los permitidos por int, devuelve void
 *
 * \param int VariableA
 * \param
 * \return void
 *
 */
void Factorial(int varF)//se crea el factoria usando un for o while
 {
     int i;
     double fact=1;
      if(varF==0)
    {
        fact = 1;
    }

/*
     for(i=varF; i<=1; i--)
     {
        fact = fact *i;
     }
 */  i=varF; //i se iguala a la varible ingresada para obtener el factorial
     while(i>=1)
     {
         fact=fact * i;
         i--;
     }
     printf("\nEl factorial %d! = %.0f\n",varF,fact);
   // return 0;
 }


 /** \brief Verifica que el divisor no se 0, y pide que ingrese un valor distinto
  *
  * \param ingresa int VariableB
  * \param
  * \return VarB
  *
  */
 int ValIntCero(int VariableB)
 {
    int varB;
    varB=VariableB;
    while(varB==0) //verifica que el divisor no sea 0
                {
                    printf("\nNo se pude divider por 0, reingrese divisor: ");
                    scanf("%d",&varB);
                }
    return varB;
 }


 /** \brief ingresa variable entera int, solo valido  para obtener un factorial hasta 31!, returna valor entero
  *
  * \param int num
  * \param
  * \return 1 si el valor ingresado es 0, valor como resultado de factoriales menores a 31!
  *
  */
 int FactorialDeClase(int num)
{
    int valor;
    if(num==0)
    {
        return 1;
    }
    valor=num*FactorialDeClase(num-1);
    return valor;
}
