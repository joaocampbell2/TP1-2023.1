# include <stdio.h>

int main(){
    int matriz[2][3],i ,j;


    for ( i = 0;i < 2;i++){
        for ( j = 0; j<3; j++){
            printf("Insira valor: ");
            scanf("%d", &matriz[i][j]);
        }

    }

    int multiplicador;

    printf("Insira multiplicador: ");
    scanf("%d", &multiplicador);


    for (i =0; i< 2;i++){
        for (j = 0; j<3; j++){
            matriz[i][j] = matriz[i][j] * multiplicador;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}



