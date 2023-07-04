#include <stdio.h>


int main(){

    int m[4][4], i,j, soma = 0;


    for (i =0;i<4;i++){
        for (j = 0; j<4;j++){
            printf("Insira valor de M:");
               scanf("%d", &m[i][j]);
        }
    }
 
   
    for (i =0;i<4;i++){
        for (j = 0; j<4;j++){
            if (i < j){
                soma += m[i][j];
                printf("%d ", m[i][j]);
            }
           
        }
    }

    printf("%d",soma);



    return 0;
}