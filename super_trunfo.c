#include <stdio.h>

//Declaração de variaveis
 //variaveis Carta 01
    char nome[50], estado[50], Codigo[4];
    unsigned int populacao;
    int ponto;
    float area, densidade;
    double pib, pibpercapita, superpoder;
//variaveis carta 02
    char nome2[50], estado2[50], Codigo2[4];
    unsigned int populacao2;
    int ponto2;
    float area2, densidade2;
    double pib2, pibpercapita2, superpoder2; 

void entradaDados() {
//Carta 01 coleta de informações 
    printf("** Super Trunfo Paises **\n");
    printf("\nDigite as Informações da Carta 01\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado);//usei %[^\n] para que fosse possivel ler espaço no nome do estado
    printf("Digite o codigo do estado: ");
    scanf(" %[^\n]", Codigo);//usei %[^\n] para que fosse possivel ler tanto letras quanto numeros
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);//usei %[^\n] para que fosse possivel ler espaço no nome da cidade
    printf("Digite a população da cidade: ");
    scanf("%u", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &ponto);

//carta 02 coleta de informações
    printf("\nDigite as Informações da Carta 02\n");
    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o codigo do estado: ");
    scanf(" %[^\n]", Codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população da cidade: ");
    scanf("%u", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &ponto2);
}

void calculos() {
//calculos da carta 01 e 02
    //carta 01
    densidade = (float)populacao/area;
    pibpercapita = (float)pib / populacao; // usei casting para garantir a precisão e evitar perda de dados
    superpoder = (double)(populacao + ponto + pib + area + pibpercapita) / densidade;
    //carta 02
    densidade2 = (float)populacao2/area2;
    pibpercapita2 = (float)pib2 / populacao2;
    superpoder2 = (double)(populacao2 + ponto2 + pib2 + area2 + pibpercapita2) / densidade2;
}

void exibirDados() {
//Carta 01 visualização de informações
    printf("\n** Informações da Carta 01 **\n");
    printf("Nome do Estado: %s\n", estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Numero de pontos turisticos: %d\n", ponto);
    printf("Densidade: %.2f\n", densidade);
    printf("PIB percapta: %.2lf\n", pibpercapita);
    printf("Super Poder: %.2f\n", superpoder);

//carta 02 visualização de informações
    printf("\n** Informações da Carta 02 **\n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Numero de pontos turisticos: %d\n", ponto2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB percapta: %.2lf\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
}

void comparacao() {
    printf("\n** Comparações das Cartas **\n");
    printf("*O Vencedor é igual a 1 para carta 01 e 0 para a carta 02*\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", ponto > ponto2);
    printf("Densidade Populacional: %d\n", densidade < densidade2);
    printf("PIB per Capita: %d\n", pibpercapita > pibpercapita2);
    printf("Super Poder: %d\n", superpoder > superpoder2);
}

int main() {
    entradaDados();
    calculos();
    exibirDados();
    comparacao();   
    return 0;
}