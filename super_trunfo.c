#include <stdio.h>

//Declaração de variaveis
 //variaveis Carta 1
    char nome[50], estado[50], Codigo[4];
    unsigned int populacao;
    int ponto;
    float area, densidade;
    double pib, pibpercapita, superpoder;//utilizei double para garantir a precisão pois o pib é um valor muito grande
//variaveis carta 2
    char nome2[50], estado2[50], Codigo2[4];
    unsigned int populacao2;
    int ponto2;
    float area2, densidade2;
    double pib2, pibpercapita2, superpoder2; 
//variavel de comparação
    int caracteristica;

void entradaDados() {
//Carta 01 coleta de informações 
    printf("** Super Trunfo Paises **\n");
    printf("\nDigite as Informações da Carta 1\n");
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
    printf("\nDigite as Informações da Carta 2\n");
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
//calculos da carta 1 e 2
    //carta 1
    densidade = (float)populacao/area;
    pibpercapita = (float)pib / populacao; // usei casting para garantir a precisão e evitar perda de dados
    superpoder = (double)(populacao + ponto + pib + area + pibpercapita) / densidade;
    //carta 2
    densidade2 = (float)populacao2/area2;
    pibpercapita2 = (float)pib2 / populacao2;
    superpoder2 = (double)(populacao2 + ponto2 + pib2 + area2 + pibpercapita2) / densidade2;
}

void exibirDados() {
//Carta 01 visualização de informações
    printf("\n** Informações da Carta 1 **\n");
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
    printf("\n** Informações da Carta 2 **\n");
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
    printf("\n1:nome da cidade \n");
    printf("2:População\n");
    printf("3:Área\n");
    printf("4:PIB\n");
    printf("5:Pontos Turísticos\n");
    printf("6:Densidade Populacional\n");
    printf("Digite o numero da caracteristica que deseja comparar: ");
    scanf("%d", &caracteristica);

    switch (caracteristica) {
    //Apenas para visualização dos nomes das cidades
    case 1:  
        printf("\nNome da cidade 1: %s\nNome da cidade 2:: %s\n", nome, nome2);
        break;
    //comparação da população
    case 2:
    if(populacao > populacao2) {
        printf("\nCarta 01: %s: %u\n", nome, populacao);
        printf("Carta 02: %s: %u\n", nome2, populacao2);
        printf("Resultado: Carta 01 %s venceu!\n", nome);
    }
    else if (populacao == populacao2) {
        printf("\nCarta 01: %s: %u\n", nome, populacao);
        printf("Carta 02: %s: %u\n", nome2, populacao2);
        printf("Resultado: Empate!\n");
    }
    else {
        printf("\nCarta 01: %s: %u\n", nome, populacao);
        printf("Carta 02: %s: %u\n", nome2, populacao2);
        printf("Resultado: Carta 02 %s venceu!\n", nome2);
    }
    break;
    //comparação da area
    case 3:
    if(area > area2) {
        printf("\nCarta 01: %s: %.2f\n", nome, area);
        printf("Carta 02: %s: %.2f\n", nome2, area2);
        printf("Resultado: Carta 01 %s venceu!\n", nome);
    }
    else if (area == area2) {
        printf("\nCarta 01: %s: %.2f\n", nome, area);
        printf("Carta 02: %s: %.2f\n", nome2, area2);
        printf("Resultado: Empate!\n");
    }
    else {
        printf("\nCarta 01: %s: %.2f\n", nome, area);
        printf("Carta 02: %s: %.2f\n", nome2, area2);
        printf("Resultado: Carta 02 %s venceu!\n", nome2);
    }
    break;
    //comparação do PIB
    case 4:
    if(pib > pib2) {
        printf("\nCarta 01: %s: %.2lf\n", nome, pib);
        printf("Carta 02: %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Carta 01 %s venceu!\n", nome);
    }
    else if (pib == pib2) {
        printf("\nCarta 01: %s: %.2lf\n", nome, pib);
        printf("Carta 02: %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Empate!\n");
    }
    else {
        printf("\nCarta 01: %s: %.2lf\n", nome, pib);
        printf("Carta 02: %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Carta 02 %s venceu!\n", nome2);
    }
    break;
    //comparação dos pontos turisticos
    case 5:
    if(ponto > ponto2) {
        printf("\nCarta 01: %s: %d\n", nome, ponto);
        printf("Carta 02: %s: %d\n", nome2, ponto2);
        printf("Resultado: Carta 01 %s venceu!\n", nome);
    }
    else if (ponto == ponto2) {
        printf("\nCarta 01: %s: %d\n", nome, ponto);
        printf("Carta 02: %s: %d\n", nome2, ponto2);
        printf("Resultado: Empate!\n");
    }
    else {
        printf("\nCarta 01: %s: %d\n", nome, ponto);
        printf("Carta 02: %s: %d\n", nome2, ponto2);
        printf("Resultado: Carta 02 %s venceu!\n", nome2);
    }
    break;
    //comparação da densidade populacional
    case 6:
    if(densidade < densidade2) {
        printf("\nCarta 01: %s: %.2f\n", nome, densidade);
        printf("Carta 02: %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Carta 01 %s venceu!\n", nome);
    }
    else if (densidade == densidade2) {
        printf("\nCarta 01: %s: %.2f\n", nome, densidade);
        printf("Carta 02: %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Empate!\n");
    }
    else {
        printf("\nCarta 01: %s: %.2f\n", nome, densidade);
        printf("Carta 02: %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Carta 02 %s venceu!\n", nome2);
    }
    break;
    default:
        printf("\nOpção invalida!\n");
    break;
    }  
}

int main() {
    entradaDados();
    calculos();
    exibirDados();
    comparacao();   
    return 0;
}