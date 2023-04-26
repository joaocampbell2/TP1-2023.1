#include <stdio.h>
#include <stdlib.h>


#define pi 3.14

int ex9()
{

float raio,alt, volume;


    printf("Qual o raio?");

    scanf("%f", &raio);

     printf("Qual a altura?");

    scanf("%f", &alt);

    volume = pi * (raio * raio) * alt;


    printf("O volume e: %.2f ", volume);



    return 0;
}





