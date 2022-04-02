#include <stdio.h>
#include <stdlib.h>

#include "VE2.h"

struct ve2 {
    int capacidade; //Tamanho do array F
    int ini;        //Posicao do "primeiro" elemento
    int fim;        //Posição livre onde um elemento deve ser inserido
    int n;          //Número de elementos na estrutura
    int *F;         //Array para armazenar os elementos
};

VE2 *criaVE2(int capacidade) {
    /*Verifique se o valor em capacidade é válido */
    /*Se for, inicialize n, ini e fim com 0 (indicando que a estrutura está vazia) */
    /*Aloque o array 'F' e retorne o ponteiro da estrutura */

    if(capacidade < 1) {
        printf("Capacidade deve ser >= 1\n");
        return NULL;
    }
    VE2 *v = malloc(sizeof(VE2));
    if (v == NULL){
        printf("Sem memoria!\n");
        exit(0);
    }
    v->capacidade = capacidade;
    v->n = 0;
    v->ini = 0;
    v->fim = 0;
    v->F = malloc(capacidade*sizeof(int));
    if (v->F == NULL) {
        printf("Sem memoria!\n");
        exit(0);
    }
    return v;
}

void liberaVE2(VE2 *ve) {
    /* Faz a desalocação de memória */
    if(ve == NULL)
        return;
    if (ve->F != NULL)
        free(ve->F);
    free(ve);
    ve = NULL;
    
}

void adicionaVE2(VE2 *ve, int v) {
    /* Adiciona um elemento no fim do vetor */
    /* Lembre-se de verificar se há espaço para adicionar o elemento */
    /* Complexidade: O(1)  */              
    if(ve == NULL){
        printf("Vetor não alocado!\n");
        return;
    }
    if(ve->n < ve->capacidade) {
        ve->F[ve->fim] = v;
        ve->n++;
        ve->fim++;
    }
    else{
        printf("Vetor sem espaço!\n");
    }

}

void removeVE2(VE2 *ve) {
    /* Retira o ultimo elemento*/
    /* Complexidade: O(1)  */
    ve->ini++;
    ve->n--;
}

int obtemElementoVE2(VE2 *ve){
    /*Retorna o elemento ultimo */
    /* Complexidade: O(1)  */

    return ve->F[ve->fim];
}

int vazioVE2(VE2 *ve) {
    /* Verifica se a estrutura está vazia */
    /* Complexidade: O(1)  */
    if (ve->n == 0)
        return 1;
    return 0;
}

int cheioVE2(VE2 *ve) {
    /* Verifica se a estrutura está cheia */
    /* Complexidade: O(1)  */
    if (ve->n > (ve->capacidade))
        return 1;
    return 0;
}

int tamanhoVE2(VE2 *ve) {
    /* Retorna o número de elementos que a estrutura armazena */
    /* Complexidade: O(1)  */

    return ve->n;
}

/*Nessa estrutura, é utilizado o campo 'ini' para indicar  a posição do primeiro elemento, que não necessariamente está na posição 0. */
/* O que mudaria se optarmos por não usar esse campo e sempre manter o primeiro elemento na posição 0? */
/* A complexidade para inserir e remover um elemento seriam as mesmas? */
/* Escreva abaixo, em forma de comentário, a sua resposta */

//Se não tivessemos o ini teriamos um erro, já que não iriamos conseguir adicionar mais elementos.

//Acredito que seria um pouco mais complicado para inserir e/ou remover um elemento.
