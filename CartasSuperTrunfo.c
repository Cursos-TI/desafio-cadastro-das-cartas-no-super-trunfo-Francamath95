#include <stdio.h>

int main() {
    char Nome[50];
    int Populacao;
    float Area;
    float PIB;
    int No_Pontos_Tur;

    printf("Digite o Nome da cidade: \n");
    fgets(Nome, sizeof(Nome), stdin);

    printf("Digite a População desta cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área desta cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos desta cidade: \n");
    scanf("%d", &No_Pontos_Tur);

    printf("\n--- Dados da Cidade ---\n");
    printf("Nome: %s", Nome);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", No_Pontos_Tur);

    return 0;
}
