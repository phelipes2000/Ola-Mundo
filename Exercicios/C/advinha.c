#include <stdio.h>
int main(){
int numeroGerado, palpite = 0;
srand(time(NULL));
numeroGerado = rand();
numeroGerado = numeroGerado % 100;
while(palpite!=-1){
        printf("digite um palpite [0 a 99], se desistir digite [-1]");
    scanf("%d",&palpite);
    if (palpite==numeroGerado){
        printf("voce ganhou");
        break;
    }
    else{
        printf("tente novamente");
    }
    if(palpite==-1){
        printf("o nmr era %d",numeroGerado);
    }

}
}
