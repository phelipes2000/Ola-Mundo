#include <stdio.h>
int main(){
    float salario,p,novosal,va;
    salario = 1000;
    p = 30;
    va = (salario*p)/100;
    novosal = va+salario;
    printf("Salario atual: %.2f\nPorcentagem do aumento: %.2f%%\nValor do aumento: %.2f\nO novo salario eh: %.2f", salario,p,va,novosal);
}
//~~phelipes2000
