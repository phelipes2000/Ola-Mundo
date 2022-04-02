#include <stdio.h>
#include <stdlib.h>

#include "VE1.h"

struct ve1 {
    int capacidade; //Tamanho do array F
    int n;          //Posição do útimo elemento (também pode ser usado para determinar o #elementos)
    int *P;         //Array para armazenar os elementos na estrutura
};

VE1 *criaVE1(int capacidade) {
    /*Verifique se o valor em capacidade é válido */
    /*Se for, inicialize n com -1 (indicando que a estrutura está vazia) */
    /*Aloque o array 'P' e retorne o ponteiro da estrutura */
    if(capacidade < 0) {
        printf("Capacidade deve ser >= 1\n");
        return NULL;
    }
    VE1 *v = malloc(sizeof(VE1));
    if (v == NULL){
        printf("Sem memoria!\n");
        exit(0);
    }
    v->capacidade = capacidade;
    v->n = -1;
    v->P = malloc(capacidade*sizeof(int));
    if (v->P == NULL) {
        printf("Sem memoria!\n");
        exit(0);
    }
    return v;
}

void liberaVE1(VE1 *ve) {
    /* Faz a desalocação de memória */
    if(ve == NULL)
        return;
    if (ve->P != NULL)
        free(ve->P);
    free(ve);
    ve = NULL;
}

void adicionaVE1(VE1 *ve, int v) {
    /* Adiciona um elemento no fim do vetor */
    /* Lembre-se de verificar se há espaço para adicionar o elemento */
    /* Complexidade: O(1)  */              
    if(ve == NULL){
        printf("Vetor não alocado!\n");
        return;
    }
    if(ve->n < ve->capacidade) {
        ve->n++;
        ve->P[ve->n] = v;
    }
    else{
        printf("Vetor sem espaço!\n");
    }

}

void removeVE1(VE1 *ve) {
    /* Retira o ultimo elemento*/
    /* Complexidade: O(1)  */
    ve->n--;

}

int obtemElementoVE1(VE1 *ve){
    /*Retorna o elemento ultimo */
    /* Complexidade: O(1)  */

    return ve->P[ve->n];
}

int vazioVE1(VE1 *ve) {
    /* Verifica se a estrutura possui algum elemento ou está vazia */
    /* Complexidade: O(1)  */

    if (ve->n == -1)
        return 1;
    return 0;
}

int cheioVE1(VE1 *ve) {
    /* Verifica se a estrutura está cheia */
    /* Complexidade: O(1)  */

    if (ve->n > (ve->capacidade - 1))
        return 1;
    return 0;
}

int tamanhoVE1(VE1 *ve) {
    /* Retorna o número de elementos que a estrutura armazena */
    /* Complexidade: O(1)  */

    return ve->n;
}

