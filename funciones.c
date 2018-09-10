#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Solicita dos numeros y los suma
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la suma de las dos variables.
 *
 */

float funcion_Suma(float a,float b)
{
    float suma;
    suma = a+b;
    return suma;
}


/** \brief Solicita dos numeros y los resta
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la resta de las dos variables.
 *
 */

float funcion_Resta(float a,float b)
{
    float resta;
    resta = a-b;
    return resta;
}


/** \brief Solicita dos numeros y los multiplica
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la multiplicacion de las dos variables.
 *
 */

float funcion_Multiplicacion(float a,float b)
{
    float multiplicacion;
    multiplicacion = a*b;
    return multiplicacion;
}

/** \brief Solicita dos numeros y los divide
 *
 * \param a Numero a ingresar por el usuario
 * \param b Segundo numero a ingresar por el usuario
 * \return En caso de no dar error, retorna la division de las dos variables.
 *
 */

float funcion_Division(float a,float b)
{

    if(b==0)
    {
        printf("Error.");
        return -1;
    }
    else
    {
        float division;
        division = a/b;
        return division;
    }
}
/** \brief Solicita un numero y saca el factorial
 *
 * \param a
 * \param
 * \return
 *
 */

int funcion_Factorial(int a)
{
    int resp;
    if(a==1)
        return 1;
    resp=a* funcion_Factorial(a-1);
    return (resp);

}

