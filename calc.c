#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

/** \brief Valida valores con un valor minimo y maximo retorna valor valido
 *
 * \param entra valor int Opc
 * \param int OpcMin
 * \param int OpcMax
 * \return Opc
 *
 */
int ValEntero(int Opc, int OpcMin, int OpcMax)
{
    while(Opc<OpcMin || Opc>OpcMax)
    {
         printf("\nError debe ingresar valor entre %d y %d: ",OpcMin, OpcMax);
         scanf("%d",&Opc);
    }
    return Opc;
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

    printf("\nLa divicion %d / %d = %.2f \n\n", VariableA,VariableB, result);// se limita el resultado de fraccion a 2 caracteres luego de la coma
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
    printf("\nLa multiplicacion %d * %d = %d\n\n", VariableA,VariableB, VariableA * VariableB);
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
    printf("\nLa resta %d - %d = %d\n\n", VariableA,VariableB, VariableA - VariableB);
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
    printf("\nLa suma %d + %d = %d\n\n",VariableA, VariableB,VariableA+VariableB);
   // return 0;
}
/** \brief entran valor enteros y muestra por pantalla resultado pasados double para procesar factorial de mas valor que los permitidos por int, devuelve void
 *
 * \param int VariableA
 * \param
 * \return void
 *
 */
float Factorial(int varFA)//se crea el factoria usando un for o while
 {
     int i;
     double factA=1;
      if(varFA==0)
    {
        factA = 1;
    }

/*
     for(i=varFA; i<=1; i--)
     {
        factA = factA *i;
     }
 */  i=varFA; //i se iguala a la varible ingresada para obtener el factorial
     while(i>=1)
     {
         factA=factA * i;
         i--;
     }
     //printf("\nEl factorial de A: %d! = %.0f\n\n",varFA,factA);

   return  factA;
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
