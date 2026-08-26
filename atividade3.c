#include <stdio.h>

#define CONSUMO 12.0  

int main() {
    double distancia, preco;
    double litros, custo;

    printf("Digite a distancia total (km): ");
    scanf("%lf", &distancia);

    printf("Digite o preco do combustivel (R$): ");
    scanf("%lf", &preco);

    litros = distancia / CONSUMO;
    custo = litros * preco;

    printf("\n==============================\n");
    printf("        RESULTADO DA VIAGEM\n");
    printf("==============================\n");
    printf("Distancia:  %10.2f km\n", distancia);
    printf("Consumo:    %10.2f km/L\n", CONSUMO);
    printf("Litros:     %10.2f L\n", litros);
    printf("Preco:      R$ %7.2f\n", preco);
    printf("Custo total:R$ %7.2f\n", custo);
    printf("==============================\n");

    return 0;
}
