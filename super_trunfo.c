#include <stdio.h>

//Declaração de variaveis
 //variaveis Carta 1
    char nome[50], estado[50], Codigo[4];
    unsigned int populacao;
    int ponto;
    float area, densidade;
    double pib, pibb, pibpercapita, superpoder;//utilizei double para garantir a precisão pois o pib é um valor muito grande
//variaveis carta 2
    char nome2[50], estado2[50], Codigo2[4];
    unsigned int populacao2;
    int ponto2;
    float area2, densidade2;
    double pib2, pibb2, pibpercapita2, superpoder2;
//variavel de comparação
    int caracteristica, caracteristica2, carta1, carta2;

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
    pibb = pib * 1000000000; // multipliquei o pib por 1 bilhão para fazer as contas corretamente, pois o pib é um valor muito grande
    densidade = (float)populacao/area;
    pibpercapita = (float)pibb / populacao; // usei casting para garantir a precisão e evitar perda de dados
    superpoder = (double)(populacao + ponto + pibb + area + pibpercapita) / densidade;
    //carta 2
    pibb2 = pib2 * 1000000000;
    densidade2 = (float)populacao2/area2;
    pibpercapita2 = (float)pibb2 / populacao2;
    superpoder2 = (double)(populacao2 + ponto2 + pibb2 + area2 + pibpercapita2) / densidade2;
}

void exibirDados() {
//Carta 01 visualização de informações
    printf("** Super Trunfo Paises **\n");
    printf("\n** Informações da Carta 1 **\n");
    printf("Nome do Estado: %s\n", estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2lf Bilhões\n", pib);
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
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2lf Bilhões\n", pib2);
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
    printf("6:PIB per capita\n");
    printf("7:Super Poder\n");
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
        printf("\nArea da carta 1 %s: %.2f km²\n", nome, area);
        printf("Area da carta 2 %s: %.2f km²\n", nome2, area2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (area == area2) {
        printf("\nArea da carta 1 %s: %.2f km²\n", nome, area);
        printf("Area da carta 2 %s: %.2f km²\n", nome2, area2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nArea da carta 1 %s: %.2f km²\n", nome, area);
        printf("Area da carta 2 %s: %.2f km²\n", nome2, area2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    //comparação do PIB
    case 3:
    if(pib > pib2) {
        printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (pib == pib2) {
        printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
        printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
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
    //comparação do PIB per capita
    case 6:
    if(pibpercapita > pibpercapita2) {
        printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
        printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (pibpercapita == pibpercapita2) {
        printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
        printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
        printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
        printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
        carta2 ++;
    }
    break;
    //comparação do super poder
    case 7:
    if(superpoder > superpoder2) {
        printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
        printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
        printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
        carta1 ++;
    }
    else if (superpoder == superpoder2) {
        printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
        printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
        printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
        carta1 ++;
        carta2 ++;
    }
    else {
        printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
        printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
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
    printf("6:PIB per capita\n");
    printf("7:Super Poder\n");
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
            printf("\nArea da carta 1 %s: %.2f km²\n", nome, area);
            printf("Area da carta 2 %s: %.2f km²\n", nome2, area2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (area == area2) {
            printf("\nArea da carta 1 %s: %.2f km²\n", nome, area);
            printf("Area da carta 2 %s: %.2f km²\n", nome2, area2);
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
            printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (pib == pib2) {
            printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nPIB da carta 1 %s: %.2lf Bilhões\n", nome, pib);
            printf("PIB da carta 2 %s: %.2lf Bilhões\n", nome2, pib2);
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
        //comparação do PIB per capita
        case 6:
        if(pibpercapita > pibpercapita2) {
            printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
            printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (pibpercapita == pibpercapita2) {
            printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
            printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nPIB per capita da carta 1 %s: %.2lf\n", nome, pibpercapita);
            printf("PIB per capita da carta 2 %s: %.2lf\n", nome2, pibpercapita2);
            printf("Resultado: Carta 2 %s venceu e ganhou 1 ponto!\n", nome2);
            carta2 ++;
        }
        break;
        //comparação do super poder
        case 7:
        if(superpoder > superpoder2) {
            printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
            printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
            printf("Resultado: Carta 1 %s venceu e ganhou 1 ponto!\n", nome);
            carta1 ++;
        }
        else if (superpoder == superpoder2) {
            printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
            printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
            printf("Resultado: Empate as duas cartas ganham 1 ponto!\n");
            carta1 ++;
            carta2 ++;
        }
        else {
            printf("\nSuper Poder da carta 1 %s: %.2f\n", nome, superpoder);
            printf("Super Poder da carta 2 %s: %.2f\n", nome2, superpoder2);
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
    entradaDados();
    calculos();
    exibirDados();
    comparacao();   
    return 0;
}