#include <stdio.h>

int main(){
    int n, i, j, result1; 
    float x, arctan, result2; 

    do{
        printf("Digite o valor de x: ");
        scanf("%f", &x);

        if (x < 0)
        {
           x = x * -1; 
        }
        
    }
    while (x >= 1); 

    do{
        printf("\nDigite o valor de n: ");
        scanf("%d", &n);
    }
    while (n < 0); 

    arctan = 0; 
    for(i = 0 ; i < n; i++){
        if (i % 2 == 0 ){
            result1 = 1;
        }
        else {
            result1 = -1;
        }
        
        result2 = x;
        for (j = 1; j < 2 * i + 1; j++)
        {
            result2 = result2 * x; 
        }
        arctan += result1 * result2 / (2 * i + 1); 
    }
    printf("O valor do arco-tangente é %.5f",  arctan); 
    return 0;     
}
