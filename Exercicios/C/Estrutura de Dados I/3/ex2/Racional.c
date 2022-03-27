#include <stdio.h>
#include <stdlib.h>

#include "Racional.h"

struct racional {
    long num;
    long den;
};

Racional* inicializaRacional(long n, long d){
    if (d == 0) {
        printf("O denominador deve ser diferente de 0!\n");
        return NULL;
    }
    Racional *r = malloc(sizeof(Racional));
    if (r == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1);
    }
    r->num = n;
    r->den = d;
    return r;
}

void liberaRacional(Racional* r) {
    if(r != NULL) { //Evita a tentativa de desalocação de um ponteiro não alocado
        free(r);
        r = NULL; //Evita ponteiros soltos
    }
}

void setNum(Racional* r, long n) {
    r->num = n;
}

void setDen(Racional* r, long d) {
    if(d == 0) {
        printf("O denominador deve ser diferente de 0!\n");
        return;
    }
    r->den = d;
}

long getNum(Racional* r) {
    return r->num;
}

long getDen(Racional* r) {
    return r->den;
}

void imprimeRacional(Racional* r) {
    if(r == NULL) {
        printf("nao inicializado!");
        exit(1);
    }
    else{
        printf("%ld/%ld\n", r->num, r->den);
    }
}

Racional* multiplicaRR(Racional* r1, Racional* r2) {
    /* Retorna o resultado de r1*r2 */
    //AVISO(Ainda não implementei a função 'multiplicaRR');
    Racional *r = malloc(sizeof(Racional));
    if (r == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1);
    }
    r->num = r1->num * r2->num;
    r->den = r1->den * r2->den;
    return r;
}

Racional *multiplicaRI(Racional *r, long a) {
    /* Retorna o resultado de r*a */
    //AVISO(Ainda não implementei a função 'multiplicaRI');
    Racional *z = malloc(sizeof(Racional));
    if (z == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1);
    }
    z->num = r->num * a;
    z->den = r->den;

    return z;
}

bool comparaRacional(Racional *r1, Racional *r2) {
    /* Retorna true se r1 == r2 e false, caso contrário */
    //AVISO(Ainda não implementei a função 'comparaRacional');
    if (r1->den == r2->den && r1->num == r2->num) {
        return true;
    }
    return false;
}
Racional* somaRR(Racional* r1, Racional* r2) {
    /* Retorna o resultado de r1+r2 */
    //AVISO(Ainda não implementei a função 'somaRR');
    Racional *z = malloc(sizeof(Racional));
    if (z == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1);
    }
    if (r1->den == r2->den) {
        z->num = r1->num + r2->num;
        z->den = r1->den;
    }
    else {
        z->den = r1->den * r2->den;
        z->num = r1->num * r2->den + r2->num * r1->den;
    }

    return z;
}

Racional *somaRI(Racional *r, long a) {
    /* Retorna o resultado da soma de r + a */
    //AVISO(Ainda não implementei a função 'somaRR');
        Racional *z = malloc(sizeof(Racional));
    if (z == NULL) {
        fprintf(stderr, "Sem memória!\n");
        exit(1); }

    z->den = r->den;
    z->num = r->den * a + r->num;

    return z;
}

/* Adicione a implementação de cada função nesse arquivo */