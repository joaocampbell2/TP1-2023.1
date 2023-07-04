/*1. Crie a struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a struct
Circulo para representar um círculo (formado por um ponto central e um raio). Por fim, leia dois
círculos e informe se esses círculos colidem. A colisão deverá ser verificada por uma função
booleana colide.*/
#include <stdio.h>
#include <math.h>

typedef struct Ponto{
    int x;
    int y;
} Ponto;

typedef struct Circulo{
    Ponto pontoCentral;
    float raio;
}Circulo;

void colide(Circulo circulo1, Circulo circulo2){
    float distanciaCirculos;
    
    distanciaCirculos = sqrt((circulo2.pontoCentral.x - circulo1.pontoCentral.x) * (circulo2.pontoCentral.x - circulo1.pontoCentral.x) + (circulo2.pontoCentral.y - circulo1.pontoCentral.y) * (circulo2.pontoCentral.y - circulo1.pontoCentral.y));




    if (distanciaCirculos <= circulo1.raio + circulo2.raio ){
        printf("Colidem!");
    }
    else{
        printf("Não colidem!")
    }
}



int main(){

    int x,y;
    Ponto ponto1, ponto2;
    Circulo circulo1,circulo2;

    printf("Digite X de Circulo 1: ");
    scanf("%d", &ponto1.x);
    printf("Digite Y de Circulo 1: ");
    scanf("%d", &ponto1.y);
    circulo1.pontoCentral  = ponto1;
    printf("Digite raio de Circulo 1:");
    scanf("%f", &circulo1.raio);
    
    printf("Digite X de Circulo 2: ");
    scanf("%d", &ponto2.x);
    printf("Digite Y de Circulo 2: ");
    scanf("%d", &ponto2.y);
    circulo2.pontoCentral  = ponto2;
    printf("Digite raio de Circulo 2:");
    scanf("%f", &circulo2.raio);
    
    colide(circulo1,circulo2);









    return 0;
}