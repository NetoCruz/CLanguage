# C Language
An introduction to C language
Find the Circle area examples

/*Programa para calcular el área del circulo*/

#include <stdio.h>             /*Acceso a archivo de biblioteca*/

main()                         /*Cabecera de la función*/
{
    float radio,area;          /*Declaración de variables*/

    printf("Radio=?");         /*Instrucciones de salida*/

    scanf("%f",&radio);        /*Instrucciones de entrada*/

    area= 3.14159*radio*radio; /*Instrucción de asignación*/
    
    printf("Area= %f",area);   /*Instrucción de salida*/
}
