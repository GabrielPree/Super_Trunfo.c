#include <stdio.h>

int main(){
 //Carta 01
    char nome[50], estado[50], Codigo[4];
    int populacao;
    float area;
    double pib;
    int ponto;

    //Carta 01 coleta de informações 
    printf("** Super Trunfo Paises **\n");
    printf("Digite as Informações da Carta 01\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);//usei %[^\n] para que fosse possivel ler espaço no nome do estado
    printf("Digite o codigo do estado: ");
    scanf(" %[^\n]", Codigo);//usei %[^\n] para que fosse possivel ler tanto letras quanto numeros
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);//usei %[^\n] para que fosse possivel ler espaço no nome da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &ponto);
//Carta 01 visualização de informações
    printf("\n\n** Informações da Carta 01 **\n");
    printf("Nome do Estado: %s\n", estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Numero de pontos turisticos: %d\n", ponto);
    return 0;
}