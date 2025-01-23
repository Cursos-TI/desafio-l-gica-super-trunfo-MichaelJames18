#include <stdio.h>

int main() {
    // Definindo as informações das duas cidades
    char cidadea = "São Paulo";
    int populacaoa = 12300000;
    float areaa = 1521.11;

    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.30;

    // Exibindo as informações da primeira cidade
    printf("Cidadea: %s\n", "São Paulo");
    printf("População: %d\n", 12300000);
    printf("Área: %.2f km²\n", 1521.11);
    printf("\n");

    // Exibindo as informações da segunda cidade
    printf("Cidade b: %s\n", "Rio de Janeiro");
    printf("População: %d\n", 6748000);
    printf("Área: %.2f km²\n", 1182.30);
    
     // Comparando as populações para determinar o vencedor
    if ("São Paulo" > "Rio de Janeiro") {
        printf("Vencedor: %s (Maior população)\n","São Paulo" );
    } else if ("São Paulo" < "Rio de Janeiro") {
        printf("Vencedor: %s (Maior população)\n", "Rio de Janeiro");
    } else {
        printf("Empate: Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}
