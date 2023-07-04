#include <stdio.h>


int main(){

    int m[4][4], i,j, d1 =1, d2 =1,det;


    for (i =0;i<4;i++){
        for (j = 0; j<4;j++){
            printf("Insira valor de M:");
            scanf("%d", &m[i][j]);
        }
    }
 
   
    for (i =0;i<4;i++){
        for (j = 0; j<4;j++){
            if (i ==j){
                d1 *= m[i][j];
            }
            else if( i+j == 3){
                d2*=m[i][j];
            }
        }
    }
    det = d1 - d2;

    printf("%d",det);



    return 0;
}