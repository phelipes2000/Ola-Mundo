#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) return 1;
    else {
        return x * potencia(x, n-1);
    }
}

int main() {
    int x, n;
    //scanf("%d %d", &x, &n);
    //printf("%d", potencia(x, n);
    printf("%d", potencia(4,1));
}
