#include <stdio.h>


int main(){

    int m[5][5], i,j;


    for (i =0;i<5;i++){
        for (j = 0; j<5;j++){
            printf("Insira valor de M:");
               scanf("%d", &m[i][j]);
        }
    }
 
   
    for (i =0;i<5;i++){
        for (j = 0; j<5;j++){
            if (m[i][j] != m[j][i]){
                printf("Não é simetrica!!!");
                return 0;
            }
           
        }
    }

    printf("É simétrica!");



    return 0;
}