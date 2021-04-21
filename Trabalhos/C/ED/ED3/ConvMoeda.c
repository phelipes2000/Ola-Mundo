#include <stdio.h>
int main(){
//Comecando
float din,fim;
int escolha;
printf(" Digite o valor em reais: ");
scanf("%f",&din);
//------MENU---------
/*Optei por colocar as abreviacoes que sao bastante usadas
no mercado de forex ou op��es binarias e ao lado o nome da moeda*/
printf("  1 - USD (Dolar americano)   - R$5,50 \n");
printf("  2 - JPY (Iene japones)      - R$0,052 \n");
printf("  3 - EUR (Euro)              - R$6,71 \n");
printf("  4 - GBP (Libra Esterlina)   - R$7,73 \n");
printf("  5 - AUD (Dolar australiano) - R$4,35 \n");
printf(" Escolha o tipo de moeda que deseja converter: ");
scanf("%d",&escolha);
/*Todas as moedas estar�o na cota��o do dia 25/02/2021
por volta das 15:00 horas*/
switch(escolha){
case 1:
    fim = (din / 5.50);
    printf(" Voce converteu %.2f em %.2f USD. \n",din,fim);
    break;
case 2:
    fim = (din / 0.052);
    printf(" Voce converteu %.2f em %.2f JPY. \n",din,fim);
    break;
case 3:
    fim = (din / 6.71);
    printf(" Voce converteu %.2f em %.2f EUR. \n",din,fim);
    break;
case 4:
    fim = (din / 7.73);
    printf(" Voce converteu %.2f em %.2f GBP. \n",din,fim);
    break;
case 5:
    fim = (din / 4.35);
    printf(" Voce converteu %.2f em %.2f AUD. \n",din,fim);
    break;
default:
    printf(" ERROR: TIPO DE MOEDA INVALIDA! \n");
}
system("pause");
}
//~~phelipes2000
