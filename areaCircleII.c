#include <stdio.h> 

#define PI 3.14159

float procesar(float radio);  /*Prototipo de función*/

main()                        
{
    float radio,area;          

    printf("Radio=?");         

    scanf("%f",&radio);       

    area= procesar(radio); 
    
    printf("Area= %f",area);   
}

float procesar(float r)  /*Definición de la función*/
{
    float a;
    a=PI*r*r;
    return(a);
}