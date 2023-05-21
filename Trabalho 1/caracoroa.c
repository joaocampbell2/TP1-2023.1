#include <stdio.h>

int main(){

int n, maria , joao, r;

do{
    printf("Digite o valor de n: \n"); 
    scanf("%d", &n);
    if (1 <= n && n <= 10000){
        maria = 0;
        joao = 0;
        for(int i = 1; i<= n; i++){
            scanf("%d", &r);
            if (r == 0){
                maria++;
            } 
            else if(r == 1){
                joao++;
            } 
            else {
                printf("Valor Inválido, Digite novamente!\n");
                break;
            }
             
        }
        
        
        
         
        fflush(stdin);
        if (maria != 0 || joao != 0){
            printf("\nMaria venceu %d vez(es) e João venceu %d vez(es)\n", maria, joao); 
        } 
    }
    else if (n !=0){
        printf("ERRO! Digite um valor novamente\n");
    }

}while (n != 0); 


return 0;
} 
