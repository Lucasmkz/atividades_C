#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int numero;

    printf("Digite numeros inteiros (0 para sair):\n");

    do {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (ehPar(numero)) {
                printf("%d eh par\n", numero);
            } else {
                printf("%d eh impar\n", numero);
            }
        }
    } while (numero != 0);

    printf("Fim.\n");
    return 0;
}
