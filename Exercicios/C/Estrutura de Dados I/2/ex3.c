#include <stdio.h>

int fibo(int n){
    printf("Iniciando a funcao fibo(%d)\n", n);
    for(int i = 0; i <= n; i++) {
        if (i <= 2){
            printf("fibo(%d) = %d\n", i, i);
        }
        else{
            int fibo = (i - 1) + (i - 2);
            printf("fibo(%d) = %d\n", i, fibo);
        }
    }
    /*if (n < 2){
        printf("Finalizando a funcao fibo(%d) com valor %d\n", n, n);
        return n;
    }

    int f = fibo(n - 1) + fibo(n - 2);
    printf("Finalizando a funcao fibo(%d) com valor %d\n", n, f);
    return f;*/

}

int main() {
    int num, fibonacci;
    scanf("%d", &num);
    fibonacci = fibo(num);
    //printf("fibo(%d) = %d\n", num, fibonacci);
    return 0;
}
