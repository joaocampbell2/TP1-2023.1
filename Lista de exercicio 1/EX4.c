#include <stdio.h>
#include <stdlib.h>

int ex4()
{

float preco, desconto, final;


    printf("Qual o preco?");

    scanf("%f", &preco);

    printf("Qual o desconto?");

    scanf("%f", &desconto);



    final = preco - (preco * desconto/100);

    printf("O preco final e: R$%.2f", final);

    return 0;
}

