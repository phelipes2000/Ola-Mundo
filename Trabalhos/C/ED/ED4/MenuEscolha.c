#include <stdio.h>
int main(){
int i,n;
for(i=0;i!=4;i=n){
    printf(" 1 - Charmander\n");
    printf(" 2 - Squirtle\n");
    printf(" 3 - Bulbasaur\n");
    printf(" 4 -   Sair\n");
    printf(" Escolha uma opcao: ");
    scanf("%d",&n);
    switch (n){
        case 1:
            printf("-------------------------------------\n");
            printf("Voce escolheu a opcao 1 - Charmander.\n");
            printf("-------------------------------------\n");
            break;
        case 2:
            printf("-----------------------------------\n");
            printf("Voce escolheu a opcao 2 - Squirtle.\n");
            printf("-----------------------------------\n");
            break;
        case 3:
            printf("------------------------------------\n");
            printf("Voce escolheu a opcao 3 - Bulbasaur.\n");
            printf("------------------------------------\n");
            break;
        case 4:
            printf("--------------------------------------\n");
            printf("Voce escolheu encerrar o programa. . .\n");
            printf("--------------------------------------\n");
            break;
        default:
            printf("---------------------------------\n");
            printf("Voce escolheu uma opcao invalida.\n");
            printf("---------------------------------\n");
            break;
    }

}
}
//~~~~~~~~~~~~~~
//~~phelipes2000