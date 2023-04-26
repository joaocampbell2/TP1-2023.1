#include <stdio.h>
#include <stdlib.h>


#define pi 3.14

int ex7()
{

float raio, volume;


    printf("Qual o raio?");

    scanf("%f", &raio);


    volume = pi * 4* (raio * raio * raio) / 3;


    printf("O volume e: %.2f ", volume);



    return 0;
}




