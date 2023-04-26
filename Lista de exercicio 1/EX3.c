#include <stdio.h>
#include <stdlib.h>

int ex3()
{

  float peso, alt, imc;


    printf("Qual o peso?");

    scanf("%f", &peso);

    printf("Qual a altura?");

    scanf("%f", &alt);


    imc = peso / (alt * alt);

    printf("A area e: %f", imc);

    return 0;
}

