#include <stdio.h>
#include <stdlib.h>

int ex5()
{

float tamanho, velocidade, tempo;


    printf("Qual o tamanho do arquivo?");

    scanf("%f", &tamanho);

    printf("Qual a velocidade de download?");

    scanf("%f", &velocidade);



    tempo = tamanho / velocidade;

    printf("O arquivo vai baixar em %.1fs", tempo);

    return 0;
}


