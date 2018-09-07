/*
 * Este programa fue realizado como la tarea#5 el 6 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es mostrar los n números de Pi segun
 * lo que pida el usuario.
 *
 * Fecha: 6 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <math.h> //Se incluye esta biblioteca para usar la funcion pow
#include <stdio.h>

int main() {
    //Declaracion de variables
    int n;
    double pi=0;

    //Se pregunta al usuario cuantod digitos de PI quiere ver.
    printf("¿Cuantos digitos de PI deseas ver?");
    scanf("%i", &n);

    //Formula para sacar "n" numeros de PI
    for(int k=0; k<=n; k++){
        pi+= pow(16,-k)*(4.0/ (8.0*k+1) - 2.0/(8.0*k+4.0) - 1.0/(8.0*k+5.0) - 1.0/(8.0*k+6.0));
    }

    //Se imprime con este formato double que permite "n" numeros de decimales.
    printf("%.*lf",n, pi);
    return 0;
}