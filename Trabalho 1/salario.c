#include <stdio.h>

void lerfuncionario(char *funcao, int *anosexp, int *horasc, int *horast){
    
    do{
    printf("- Função do funcionário (P / A / G): ");
    scanf("%c", funcao);
    scanf("%c", funcao);
    } while (*funcao != 'P' && *funcao != 'p' && *funcao != 'A' && *funcao != 'a' && *funcao != 'G' && *funcao != 'g'); 

    do{
    printf("\n- Anos de Experiência: "); 
    scanf("%d", anosexp); 
    } while (*anosexp < 0);

    do{
    printf("\n- Horas contratadas: "); 
    scanf("%d", horasc);
    }while (*horasc <= 0);

    do{
    printf("\n- Horas trabalhadas: "); 
    scanf("%d", horast);    
    }while (*horast < 0);
       
}

float calcularsalario(char funcao, int anosexp, int horasc, int horast,int *h, float *s, float *n, float *r){
   float salario, y;
   int diferencahoras=0, horasalario; 
   
    if (funcao == 'a')
        funcao = 'A';
    if (funcao == 'p')
        funcao = 'P';
    if (funcao == 'g')
        funcao = 'G';


   
    if (horast > horasc){
        diferencahoras =  horast - horasc;
        horasalario = horasc; 
    }
    else{
        horasalario= horast;
    }

    if(diferencahoras<=13)
        y=1.23;
    else if(diferencahoras<=22)
        y=1.37;
    else
        y=1.56;

   switch (funcao)
   {
   case ('A'):
    if(anosexp <=2){
        salario = 45 * horasalario + (diferencahoras * y * 45);
    }
    else if(anosexp <= 5){
        salario = 55 * horasalario + (diferencahoras * y * 55);
    }
    else{
        salario = 70 * horasalario + (diferencahoras * y * 70);
    }
    break;
   case ('P'):
    if(anosexp <=2){
        salario = 25 * horasalario + (diferencahoras * y * 25);
    }
    else if(anosexp <= 5){
        salario = 30 * horasalario + (diferencahoras * 30 * y);
    }
    else {
        salario = 38 * horasalario + (diferencahoras * 38 * y);
    }
    break;
   case ('G'):
    if(anosexp <=2){
        salario = 85 * horasalario + (diferencahoras * 85 * y);
    }
    else if(anosexp <= 5){
        salario = 102 * horasalario + (diferencahoras * y *102);
    }
    else{
        salario = 130 * horasalario + (diferencahoras * y *130);
    }
    break;  
   }

   float inss, ir, salliq; 

   inss = salario * 0.11; 
   salliq = salario - inss; 

   if (salliq <= 1500){
     ir = 0; 
   } 
   else if (salliq <= 2700){
     ir = salliq * 0.15; 
   }
   else if (salliq <= 4200){
     ir = salliq * 0.2; 
   } 
   else if (salliq > 4200)
   {
     ir = salliq * 0.3; 
   } 

   salliq = salliq - ir;  

    *h = diferencahoras;
    *s = salario;
    *n = inss;
    *r = ir;
   return salliq;
   
}

void imprimirFolhaPagamento(float salario,float salliq,int diferencahoras,float inss,float ir){
    printf("\n- Salário Bruto ... (R$): %.2f", salario);
    if (diferencahoras > 0)
        printf("\n- Horas Excedentes . (h): %d", diferencahoras); 
    printf("\n- Desconto INSS ... (R$): %.2f", inss);
    printf("\n- Desconto IR ..... (R$): %.2f", ir); 
    printf("\n- Salário Líquido . (R$): %.2f", salliq); 
}

int main(){

    int qtd;
    do{
        printf("Qtd: ");
        scanf("%d", &qtd);
        if(qtd <= 0){
            printf("ATENÇÃO: a quantidade de funcionários deve ser maior que zero. Informe novamente.\n");
        }
    }while(qtd <= 0);
    

    for (int i = 1; i <= qtd;i++){
       char funcao; 
       int anosexp, horasc, horast, diferencahoras;
       float salario, salliq, inss, ir; 

       printf("\n==============");
       printf("\nFuncionário %d\n", i); 
       lerfuncionario(&funcao, &anosexp, &horasc, &horast);
       salliq = calcularsalario(funcao,anosexp,horasc,horast,&diferencahoras,&salario,&inss,&ir);
       printf("\nFolha de Pagamento do Func. %d", i);  
       imprimirFolhaPagamento(salario, salliq,diferencahoras, inss, ir);

    }
    return 0;
}




