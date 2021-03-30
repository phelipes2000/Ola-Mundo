#include <stdio.h>
float so(float a, float b){
    float s;
    s = (a+b);
    return(s);
}
float su(float a, float b){
    float s;
    s = (a-b);
    return (s);
}
float m(float a, float b){
    float r;
    r = (a*b);
    return(r);
}
float d(float a, float b){
    float r;
    r = (a/b);
    return(r);
}
int main(){
    float a,b,r;
    int escolha;
    do{
    printf("\n---------------------\n");
    printf("1 - Subtracao \n");
    printf("2 - Soma \n");
    printf("3 - Multiplicacao \n");
    printf("4 - Divisao \n");
    printf("5 - Sair do programa \n");
    printf("---------------------\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d",&escolha);
    if(escolha==5){
        printf("\n-----------------------------------\n");
        printf("Voce escolheu sair do programa. . .");
        printf("\n-----------------------------------\n");
        break;
    }
    else{
        printf("Digite um numero: ");
        scanf("%f",&a);
        printf("Digite outro numero: ");
        scanf("%f",&b);
    }
    switch(escolha){
    case 1:
        r = su(a,b);
        printf("\nO resultado eh: %.2f",r);
        break;
    case 2:
        r = so(a,b);
        printf("\nO resultado eh: %.2f",r);
        break;
    case 3:
        r = m(a,b);
        printf("\nO resultado eh: %.2f",r);
        break;
    case 4:
        if(b==0){
            printf("\n----------------------------\n");
            printf("ERRO! nao pode dividir por 0");
            printf("\nTente novamente!");
            printf("\n----------------------------\n");
            break;
        }
        else{
        r = d(a,b);
        printf("\nO resultado eh: %.2f",r);
        }
        break;
    default:
        printf("\nOpcao invalida !");
        break;
    }
    }while(escolha!=5);
}
//~~phelipes2000