#include <stdio.h>
int main(){
    
int op = 0;//Variável para o usuário escolher a opção que ele vai escolher
float dep = 0.0, saldo = 0.0, saque = 0.0;//variávies para saber o quanto vai depositar ou sacar e depois mudar o saldo com a quantidade dada
do{
        //inicio do menu principal
    printf("1-) Depositar\n");
    printf("2-) Sacar\n");
    printf("3-) Listar saldo\n");
    printf("4-) Sair do programa\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d",&op);
        //fim do menu principal
    switch(op){
    case 1://se escolher depósito
        printf("\n---------------------------\n");
        printf("Quanto deseja depositar? R$");
        scanf("%f",&dep);
        printf("---------------------------\n");
        if (dep<0){//se o depósito for menor que zero o programa vai apresentar um erro.
                printf("\n-----------------------------------------\n");
                printf("Nao eh possivel depositar valor negativo ! ! !");
                printf("\n-----------------------------------------\n");
        }
        else{//mas senão ele vai pegar apenas adicionar o depósito no saldo
            saldo += dep;
            printf("\n----------------------------------------------\n");
            printf("Deposito de R$%.2f realizado com sucesso ! ! !",dep);
            printf("\n----------------------------------------------\n");
        }
        break;
    case 2://se escolher saque
        printf("\n-----------------------\n");
        printf("Quanto deseja saque? R$");
        scanf("%f",&saque);
        printf("\n-----------------------\n");
        if (saque<0)//se o saque fizer o saldo ficar negativo ele vai apresentar um erro
                printf("\n Nao eh possivel sacar valor negativo.");
        else{//senão ele apenas vai retirar o valor do saldo
            if ((saldo - saque)>=0){
                saldo -= saque;
                printf("\n-------------------------------------------\n");
                printf("Saque de R$%.2f realizado com sucesso ! ! !",saque);
                printf("\n-------------------------------------------\n");
            }
            else{
                printf("\n-----------------");
                printf("\nSaque invalido.");
                printf("\n-----------------\n");
            }
        }
        break;
    case 3://se escolher ver o saldo
        printf("\n-----------------------------\n");
        printf("Voce possui R$%.2f em sua conta\n",saldo);
        printf("-----------------------------\n");
        break;
    case 4:
        printf("\n------------------\n");
        printf("Programa encerrado\n");
        printf("------------------\n");
        break;
    default:
        printf("\n---------------------------------\n");
        printf("Voce escolheu uma opcao invalida!");
        printf("\n---------------------------------\n");
    }

}while(op!=4);
}
//---------------
//~~phelipes2000
