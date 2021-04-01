#include <stdio.h>
int main(){
int numeroGerado, palpite = 0;
srand(time(NULL));
numeroGerado = rand();
numeroGerado = numeroGerado % 100;
while(palpite!=-1){
        printf("Palpites validos [0 a 99]\nSe desistir digite [-1]\nDigite um palpite: ");
    scanf("%d",&palpite);
    if (palpite==numeroGerado){
        printf("\nVoce ganhou ! ! !");
        break;
    }

    else if(palpite==-1){
        printf("\nVoce escolheu encerrar o programa.")
        printf("\nO numero era %d\n",numeroGerado);
    }
    else if(palpite!=numeroGerado){
        printf("\nTente novamente . . .\n\n");
    }

}
}
//~~phelipes2000