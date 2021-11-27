#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a;
    int n, i;
    scanf("%d", &n);
    a = calloc(n, n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("%p: %d\n", &(a[i]), a[i]);
    }
    for (i = 0; i < n; i++) {
    free(a);
    }
    return 0;
}
