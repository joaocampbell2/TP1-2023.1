#include <stdio.h>

int main(){

int n, maria , joao, valor;

do{
    printf("Digite o valor de n: \n"); 
    scanf("%d", &n);
    if (1 <= n && n <= 10000){
        maria = 0;
        joao = 0;
        for(int i = 1; i<= n; i++){
            scanf("%d", &valor);
            if (valor == 0){
                maria++;
            } // fim do if
            else if(valor == 1){
                joao++;
            } // fim do else if
            else {
                printf("Valor Inválido\n");
                printf("Rodada desconsiderada"); 
                break;
            } // fim do else 
        } //fim do for
    
        if (maria != 0 && joao != 0){
            printf("\nMaria venceu %d vez(es) e João venceu %d vez(es)", maria, joao); 
        } //fim do if
    
    }
    else{
        printf("ERRO!/n");
    }// fim do else 

}while (n != 0); 
// fim do do while

return 0;
} 