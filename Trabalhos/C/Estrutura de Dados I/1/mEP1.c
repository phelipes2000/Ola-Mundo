#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, instrucao, a, b, i;
    long int x;
    scanf("%d %d", &N, &M);
    long long int *posicoes = calloc(N, sizeof(long long int));
    for (int j = 0; j < M; j++) {
            scanf("%d", &instrucao);
            if (instrucao == 1) {
                scanf("%d %d %ld", &a, &b, &x);
                for ( ; a <= b; a++) {
                    posicoes[(a - 1)] += x;
                }
            }
            else if (instrucao == 2) {
                scanf("%d %d %ld", &a, &b, &x);
                for ( ;a <= b; a++) {
                    posicoes[(a - 1)] -= x;
                }
            }
            else if (instrucao == 3) {
                scanf("%d", &i);
                printf("%lld\n", posicoes[(i - 1)]);
            }
    }

    free(posicoes);
}
