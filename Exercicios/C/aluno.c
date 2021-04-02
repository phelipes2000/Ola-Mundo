#include <stdio.h>
#include <string.h>
int main(){
char nome[1][50];
char disciplina[1][50];
int falta;
float nota;
    printf("Digite o nome do aluno: ");
    gets(nome[0]);
    printf("Digite a disciplina: ");
    gets(disciplina[0]);
    printf("Digite a quantidade de faltas: ");
    scanf("%d",&falta);
    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);

    printf("--Ficha do Aluno--");
    printf("\nNome: %s \n",nome[0]);
    printf("Disciplina: %s \n",disciplina[0]);
    printf("Faltas: %d \n",falta);
    printf("Nota: %.2f \n",nota);
}
