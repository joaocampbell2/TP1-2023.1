#include <stdio.h>


int main(){

    int a[3][3], b[3][3], i,j,k =2,l;


    for (i =0;i<3;i++){
        for (j = 0; j<3;j++){
            printf("Insira valor de A:");
            scanf("%d", &a[i][j]);
        }
    }
 
   
    for (i =0;i<3;i++){
        l = 2;
        for (j = 0; j<3;j++){
            b[i][j] = a[k][l];
            l--;
            
           
        }
        k--;
    }

    for (i =0;i<3;i++){
        for (j = 0; j<3;j++){
            printf("%d",b[i][j]);
            
        }
        printf("\n");
    }
   



    return 0;
}