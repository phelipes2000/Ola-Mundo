#include <stdio.h>
#include <string.h>

int main(){

    char password[81]; //variável que o usuário vai preencher com uma string, a "senha".
    char correto[81] = "123";//senha correta
    int u;//variável para podermos controlar a quantidade de vezes em que o usuário pode tentar digitar a senha correta(limitado a 3 tentativas)

    for(u=0;u<3;u++){
        printf("insira a senha: ");
        gets(password);
        printf("\n");
        if(strcmp(password, correto)==0){//a função strcmp() compara duas strings, se forem iguais retorna 0.
            printf("Senha correta. Acesso autorizado. \n");
            break;
        }
        if(u==2){
            printf("Voce errou a senha 3 vezes. Sua conta foi bloqueada. \n");
            break;
        }
        if(strcmp(password, correto)!=0){
            printf("Senha incorreta, tente novamente!\n");
        }
    }
}
//~phelipes2000
