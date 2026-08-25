//Dada a sequência: 1, 1, 2, 3, 5, 8, 13... Crie um programa em C que leia um número N e imprima os primeiros N termos dessa sequência, identificando o padrão de repetição.

#include <stdio.h>

void fibo(int n) {
    int a = 1, b = 1, proximo, i;


    for (i = 0; i <n; i++) {
        printf("%d", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");
}

    int main() {
        int n;
        printf("Digite o numero:");
        printf("Digite o valor de N:");
        scanf("%d", &n);

        fibo(n);

        return 0;
    }
   


