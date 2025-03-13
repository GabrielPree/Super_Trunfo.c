Super Trunfo - Cidades
Descrição:
Este programa simula um jogo de Super Trunfo entre duas cidades. Cada cidade possui atributos como população, área, PIB, pontos turisticos, densidade populacional, PIB per capita e super poder, O jogador pode comparar esses atributos e determinar qual cidade vence em cada rodada.

Como Compilar e Executar

Compilar o programa
Para compilar o programa em um ambiente Linux com o GCC instalado, use o seguinte comando no terminal:
gcc -o super_trunfo super_trunfo.c

Executar o programa
Após a compilação, execute o programa com o comando:
./super_trunfo

Se estiver utilizando Windows, pode compilar da seguinte forma:
gcc -o super_trunfo.exe super_trunfo.c

E executar com:
super_trunfo.exe

Como Jogar
Ao iniciar o programa, o jogador deve inserir os dados de duas cidades:
1. Nome do estado
2. Código do estado
3. Nome da cidade
4. População
5. Área
6. PIB
7. Número de pontos turísticos
Após inserir os dados, o programa irá fazer o cálculo e exibirá as informações das duas cartas e perguntará qual atributo deseja comparar.
Menu de Comparação:
O jogador pode escolher um dos seguintes atributos para comparar:
1. Nome da cidade (apenas exibição)
2. População
3. Área
4. PIB
5. Pontos turísticos
6. Densidade populacional

O programa exibirá os valores das duas cidades para o atributo escolhido e informará qual cidade venceu ou se houve empate.

Exemplo de Uso
Entrada do Usuário:
** Super Trunfo Paises **

Digite as Informações da Carta 1
Digite o nome do estado: A
Digite o código do estado: A01 
Digite o nome da cidade: São Paulo
Digite a população da cidade: 12325000
Digite a área da cidade: 1521.11
Digite o PIB da cidade: 699280000000
Digite o número de pontos turísticos da cidade: 50

Digite as Informações da Carta 2
Digite o nome do estado: B
Digite o código do estado: B02
Digite o nome da cidade: Rio de Janeiro
Digite a população da cidade: 6748000
Digite a área da cidade: 1200.25
Digite o PIB da cidade: 300500000000
Digite o número de pontos turísticos da cidade: 30

** Comparações das Cartas **
1: Nome da cidade
2: População
3: Área
4: PIB
5: Pontos Turísticos
6: Densidade Populacional
Digite o número da característica que deseja comparar: 2

Saída do Programa:
População da Carta 1 São Paulo: 12325000
população da Carta 2 Rio de Janeiro: 6748000
Resultado: Carta 1 São Paulo venceu!

Observações:
- O PIB é armazenado como double para garantir precisão para poder utilizar o numero completo.
- A densidade populacional é calculada como população / área.
- O PIB per capita é calculado como população / PIB.
- O "superpoder" de cada cidade é um valor derivado de seus atributos principais somados e dividos pela densidade para que quanto menor a densidade maior o poder da carta.