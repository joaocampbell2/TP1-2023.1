#include <stdio.h>

typedef struct Conta{
    char nome[20];
    int nConta;
    float saldo;


}Conta;

void lerContas(Conta contas[],int n){
    for (int i = 0;i < n; i++){
        printf("Insira nome: ") ;
        fgets(contas[i].nome,20,stdin);
        printf("Insira numero da conta: ");
        scanf("%d",&contas[i].nConta);
        printf("Insira saldo inicial: ");
        scanf("%f", &contas[i].saldo);
    }
}

void sacar(Conta contas[],int tamanho,int nConta, float valor){
    for(int i = 0; i < tamanho; i++){
        if (contas[i].nConta == nConta){
            if(contas[i].saldo  > valor){
                contas[i].saldo -= valor;
                break;
            }
        }
    }


}
void depositar(Conta contas[],int tamanho,int nConta, float valor){
    for(int i = 0; i < tamanho; i++){
        if (contas[i].nConta == nConta){
            contas[i].saldo += valor;
            break;
        }
    }
}
void saldo(Conta contas[],int tamanho, int nConta){

    for(int i = 0; i < tamanho; i++){
        if (contas[i].nConta == nConta){
            printf("O saldo é: %f\n",contas[i].saldo);
            break;
        }
    }
}


int main(){

    int i,n,input, nConta;
    float valor;
    printf("Insira numero de contas: ");
    scanf("%d", &n);
    Conta contas[n];
    lerContas(contas,n);



    do{
        printf("1- Sacar\n2- Depositar\n3- Consultar saldo\n4- Sair\n");
        scanf("%d", &input);

        if (input < 4){
            printf("Insira sua conta: ");
            scanf("%d", &nConta);
        }
        if (input < 3){
            printf("Insira o Valor: ");
            scanf("%f", &valor);
        }

        switch(input){
            case 1: 
                sacar(contas,n,nConta, valor);
                break;
            case 2: 
                depositar(contas,n,nConta,valor);
                break;
            case 3: 
                saldo(contas,n,nConta);
                break;
            default: break;
        }

    }while (input != 4);




    return 0;
}
