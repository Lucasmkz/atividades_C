#include <stdio.h>

int main() {
    int m[3][3];
    int i, j, soma = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                soma = soma + m[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}
