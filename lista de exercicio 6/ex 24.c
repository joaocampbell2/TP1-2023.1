#include <stdio.h>


int main(){

    int m[4][3], i,j, soma_linha[4] = {0,0,0,0}, soma_coluna[3] = {0,0,0};


    for (i =0;i<4;i++){
        for (j = 0; j<3;j++){
            printf("Insira valor de M:");
            scanf("%d", &m[i][j]);
        }
    }
 printf("===============LINHAS============\n");
   
    for (i =0;i<4;i++){
        for (j = 0; j<3;j++){
            soma_linha[i] += m[i][j]; 
        }
        printf("%d ", soma_linha[i]);
    }

printf("===============COLUNAS============\n");

    for (j =0;j<3;j++){
        for (i = 0; i<4;i++){
            soma_coluna[j] += m[i][j]; 
        }
        printf("%d ", soma_coluna[j]);
    }



    return 0;
}