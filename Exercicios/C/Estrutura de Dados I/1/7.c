#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo ; // codigo do funcionario
    int qtd_dias_trabalhados ; // qtd de dias que o funcionario trabalhou
    int * horas_trabalhadas ; // horas trabalhadas em cada dia pelo func .
    int horasTotal;
    int salario;
    int gastoTotal;
} Funcionario ;
void ler(Funcionario *ficha) {
    printf("Codigo: ");
    scanf("%d", &ficha->codigo);
    printf("Quantidade de dias trabalhados: ");
    scanf("%d", &ficha->qtd_dias_trabalhados);
    printf("Horas trabalhadas por dia: ");
    ficha->horas_trabalhadas = calloc(ficha->qtd_dias_trabalhados, sizeof(int));
    for(int j = 0; j < ficha->qtd_dias_trabalhados; j++){
        scanf("%d", &ficha->horas_trabalhadas[j]);
        ficha->horasTotal += ficha->horas_trabalhadas[j];
        ficha->salario = ficha->horasTotal * 25;
        }
}
void mostrar(Funcionario *ficha) {
    printf("%d      -     ", ficha->codigo);
    printf("%d      -     ", ficha->horasTotal);
    printf("R$%d\n", ficha->salario);
}
int main() {
    int qtdFuncionarios = 0, gastoTotal = 0, i = 0;
    Funcionario *ficha;
    printf("Quantidade de funcionarios: ");
    scanf("%d", &qtdFuncionarios);
    ficha = calloc(qtdFuncionarios, sizeof(Funcionario));
    printf("\n");
    for(i = 0; i < qtdFuncionarios; i++) {
        printf("--- Funcionario %d ---\n", (i + 1));
        ler(&ficha[i]);
        gastoTotal += ficha[i].salario;
    }
    printf("Funcionario - Horas Trabalhadas - Salario\n");
    for(i = 0; i < qtdFuncionarios; i++) {
        mostrar(&ficha[i]);
    }
    printf("Total pago aos funcionarios: R$%d", gastoTotal);
    for(i = 0; i < qtdFuncionarios; i++) {
        free(ficha[i].horas_trabalhadas);
    }
    free(ficha);
}
