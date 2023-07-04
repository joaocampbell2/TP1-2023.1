/* 2. Crie uma struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a struct
Retangulo para representar um retângulo (formado por um ponto superior esquerdo e outro ponto
inferior direito). Por fim, os dados de um retângulo e sua área e perímetro. Essas informações
deverão ser calculadas pelas funções area e perimetro, respectivamente.\*


#include <stdio.h>



typedef struct Ponto{
    int x,y;
}Ponto;

typedef struct Retangulo{
    Ponto ponto1,ponto2;
}Retangulo;

int area(Retangulo retangulo){
    int area = 0;
    area = retangulo.ponto1.y * retangulo.ponto2.x;
    return area;
    
}
int perimetro(Retangulo retangulo){
    int perimetro = 0;
    
    perimetro = retangulo.ponto1.y * 2 + retangulo.ponto2.x * 2;
    return perimetro;
    
    
    
}

int main() {
    Retangulo retangulo;
    int a, p;
    
    printf("Insira X do Ponto 1");
    scanf("%d", &retangulo.ponto1.x);
    printf("Insira Y do Ponto 1");
    scanf("%d", &retangulo.ponto1.y);
    printf("Insira X do Ponto 2");
    scanf("%d", &retangulo.ponto2.x);
    printf("Insira Y do Ponto 2");
    scanf("%d", &retangulo.ponto2.y);
    
    a= area(retangulo);
    p = perimetro(retangulo);
    
    printf("%d %d %d %d",retangulo.ponto1.y,retangulo.ponto2.x,a,p );
    
    
    


    return 0;
}
