#include <stdio.h>
#include <stdlib.h>

int ex6()
{

float celsius, far;


    printf("Qual a temperatura em C?");

    scanf("%f", &celsius);


    far = ((212-32) * celsius)/100 + 32 ;
    printf("A temperatura em fahrenheit e %.1fº", far);



    return 0;
}



