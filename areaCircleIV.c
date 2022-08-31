#include <stdio.h> 

#define PI 3.14159

float procesar(float radio);  /*Prototipo de función*/

main()                        
{
    float radio,area;  
    int cont,n;        

    printf("Número de ciculos=?");         

    scanf("%d",&n);

    for (cont=1; cont<=n;++cont){
    printf("\nCirculo No %d: Radio=?",cont)
    scanf("%f",&radio);
    if(radio<0)       
     area=0;
    else
    area= procesar(radio); 
    
    printf("Area= %f",area); 
    
    }  
}

float procesar(float r)  /*Definición de la función*/
{
    float a;
    a=PI*r*r;
    return(a);
}