#include <stdio.h>

//Declaração de variaveis
 //variaveis Carta 1
    char nome[50] = "São Paulo", estado[50] = "A", Codigo[4] = "A01";
    unsigned int populacao = 12325000;
    int ponto = 50;
    float area = 1521.11, densidade;
    double pib = 699280000000, pibpercapita, superpoder;//utilizei double para garantir a precisão pois o pib é um valor muito grande
//variaveis carta 2
    char nome2[50] = "Rio de Janeiro", estado2[50] = "B", Codigo2[4] = "B02";
    unsigned int populacao2 = 6748000;
    int ponto2 = 30;
    float area2 = 1200.25, densidade2;
    double pib2 = 300500000000, pibpercapita2, superpoder2;
//variavel de comparação
    int caracteristica, caracteristica2, carta1, carta2;

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
    printf("** Super Trunfo Paises **\n");
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
    printf("Escolha a primeira caracteristica que deseja comparar: \n");
    printf("1:População\n");
    printf("2:Área\n");
    printf("3:PIB\n");
    printf("4:Pontos Turísticos\n");
    printf("5:Densidade Populacional\n");
    printf("Digite o numero da caracteristica que deseja comparar: ");
    scanf("%d", &caracteristica);

    switch (caracteristica) {
    //comparação da população
    case 1:
    if(populacao > populacao2) {
        printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
        printf("População da carta 2 %s: %u\n", nome2, populacao2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (populacao == populacao2) {
        printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
        printf("População da carta 2 %s: %u\n", nome2, populacao2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
        printf("População da carta 2 %s: %u\n", nome2, populacao2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    
    break;
    //comparação da area
    case 2:
    if(area > area2) {
        printf("\nArea da carta 1 %s: %.2f\n", nome, area);
        printf("Area da carta 2 %s: %.2f\n", nome2, area2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (area == area2) {
        printf("\nArea da carta 1 %s: %.2f\n", nome, area);
        printf("Area da carta 2 %s: %.2f\n", nome2, area2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nArea da carta 1 %s: %.2f\n", nome, area);
        printf("Area da carta 2 %s: %.2f\n", nome2, area2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    //comparação do PIB
    case 3:
    if(pib > pib2) {
        printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (pib == pib2) {
        printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    //comparação dos pontos turisticos
    case 4:
    if(ponto > ponto2) {
        printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
        printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (ponto == ponto2) {
        printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
        printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
        printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    //comparação da densidade populacional
    case 5:
    if(densidade < densidade2) {
        printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
        printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (densidade == densidade2) {
        printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
        printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
        printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    default:
        printf("\nOpção invalida!\n");
        return;
    break;
    }
    //comparação da segunda caracteristica
    printf("\nEscolha a segunda caracteristica que deseja comparar: \n");
    printf("1:População\n");
    printf("2:Área\n");
    printf("3:PIB\n");
    printf("4:Pontos Turísticos\n");
    printf("5:Densidade Populacional\n");
    printf("Digite o numero da caracteristica que deseja comparar: ");
    scanf("%d", &caracteristica2);
    if (caracteristica2 == caracteristica) {
        printf("\nVocê escolheu o mesmo atributo!\n");
    }
    else {
        switch (caracteristica2) {
       //comparação da população
        case 1:
        if(populacao > populacao2) {
            printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
            printf("População da carta 2 %s: %u\n", nome2, populacao2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (populacao == populacao2) {
            printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
            printf("População da carta 2 %s: %u\n", nome2, populacao2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nPopulação da carta 1 %s: %u\n", nome, populacao);
            printf("População da carta 2 %s: %u\n", nome2, populacao2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }      
        break;
        //comparação da area
        case 2:
        if(area > area2) {
            printf("\nArea da carta 1 %s: %.2f\n", nome, area);
            printf("Area da carta 2 %s: %.2f\n", nome2, area2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (area == area2) {
            printf("\nArea da carta 1 %s: %.2f\n", nome, area);
            printf("Area da carta 2 %s: %.2f\n", nome2, area2);
            printf("Resultado: Empate!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nArea da carta 1 %s: %.2f\n", nome, area);
            printf("Area da carta 2 %s: %.2f\n", nome2, area2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }
        break;
        //comparação do PIB
        case 3:
        if(pib > pib2) {
            printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (pib == pib2) {
            printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nPIB da carta 1 %s: %.2lf\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf\n", nome2, pib2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }
        break;
        //comparação dos pontos turisticos
        case 4:
        if(ponto > ponto2) {
            printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
            printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (ponto == ponto2) {
            printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
            printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nPontos turisticos da carta 1 %s: %d\n", nome, ponto);
            printf("Pontos turisticos da carta 2 %s: %d\n", nome2, ponto2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }
        break;
        //comparação da densidade populacional
        case 5:
        if(densidade < densidade2) {
            printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
            printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (densidade == densidade2) {
            printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
            printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nDensidade da carta 1 %s: %.2f\n", nome, densidade);
            printf("Densidade da carta 2 %s: %.2f\n", nome2, densidade2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }
        break;
        default:
            printf("\nOpção invalida!\n");
            return;
        break;
}
}
    //Resultado final da comparação
    if (carta1 > carta2) {
        printf("\n** Resultado final **\nCarta 1: %s venceu com %i pontos!\n", nome, carta1);
    }
    else if (carta1 == carta2) {
        printf("\n** Resultado final **\nAs cartas: %s e %s empataram com %i ponto!\n", nome, nome2, carta1);
    }
    else {
        printf("\n** Resultado final**\nCarta 2: %s venceu!\n", nome2);
    }
}
//função principal
int main() {
    calculos();
    exibirDados();
    comparacao();   
    return 0;
}