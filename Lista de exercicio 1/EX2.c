#include <stdio.h>
#include <stdlib.h>

int ex2()
{
    float base, alt, area;


    printf("Qual a base?");

    scanf("%f", &base);

    printf("Qual a altura?");

    scanf("%f", &alt);


    area = (base * alt) / 2;

    printf("A area e: %f", area);

    return 0;
}
