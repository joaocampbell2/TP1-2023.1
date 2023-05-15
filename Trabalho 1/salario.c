#include <stdio.h>

void lerfuncionario(){
     char *funcao;
     int *anosexp, *horasc, *horast; 
    
    printf("- Função do funcionário (P / A / G): ");
    scanf("%c", &funcao); 

    printf("- Anos de Experiência: "); 
    scanf("%d", &anosexp); 

    printf("- Horas contratadas: "); 
    scanf("%d", &horasc); 

    printf("- Horas trabalhadas: "); 
    scanf("%d", &horast);       
}

float calcularsalario(funcao, anosexp, horasc, horast){
   float salario;
   int diferencahoras; 
   
   switch (funcao)
   {
   case ('A'):
    if(anosexp <=2){
        salario = 45 * horast;
    }
    else if(3 <= anosexp <= 5){
        salario = 55 * horast;
    }
    else{
        salario = 70 * horast;
    }
    break;
   case ('P'):
    if(anosexp <=2){
        salario = 25 * horast;
    }
    else if(3 <= anosexp <= 5){
        salario = 30 * horast;
    }
    else{
        salario = 38 * horast;
    }
    break;
   case ('G'):
    if(anosexp <=2){
        salario = 85 * horast;
    }
    else if(3 <= anosexp <= 5){
        salario = 102 * horast;
    }
    else{
        salario = 130 * horast;
    }
    break;  
   }

   diferencahoras =  horast - horasc;
   
   
   if (diferencahoras > 0){
    if (diferencahoras <= 13)
   {
        salario = salario * 1.23; 
   }
   else if ( 13 < diferencahoras <= 22 )
   {
        salario = salario * 1.37;
   }
   else
   {
        salario = salario * 1.56; 
   }

   }









   return salario;
   
}


int main(){

    int qtd;
    do{
        printf("naognapg");
        scanf("%d", &qtd);

    }while(qtd < 0);
    
    for (int i = 0; i <= qtd;i++){
       x,y,z,w = lerfuncionario();
    }



    return 0;
}
