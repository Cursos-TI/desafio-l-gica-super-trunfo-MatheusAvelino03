#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*PROGRAMA: SUPER TRUNFO LÓGICA
 *ALUNO: MATHEUS AVELINO
 *INSTITUIÇÃO: ESTACIO DE SÁ
 *PROF: SERGIO CARDOSO
 *DATA: 10/04/2025
 *DATA ATUAL: 18/06/2025
 *
 */

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // VARIAVEIS;
    char estado1, estado2;
    char numCarta1[3], numCarta2[3];
    char nCidade1[100], nCidade2[100];
    int nPopulacao_1, nPopulacao_2;
    float areaCid_1, areaCid_2;
    float pib_1, pib_2;
    int nPTuristicos_1, nPTuristicos_2;

    //intermediario - Variveis adicionais
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    //Mestre - Variavel adicional
    //float superPoder_1, superPoder_2;


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio;

    // ESTRADAS E SAÍDAS;
    // Intruções;
    printf("---------------------SUPER TRUNFO - PAÍSES-----------------------\n");
    printf("O jogador deve fornecer os dados de cadastro das cartas,\n");
    printf("sobre as cidades, descritos na ordem abaixo:\n");
    printf("Um letra de 'A' a 'H' (representando um dos oitos Estados).\n");
    printf("O Código da carta, deve ser inseridas de: 01 a 04.\n");
    printf("O nome da cidade segundo o estado representado.\n");
    printf("O Número de habitantes da cidade.");
    printf("A área quadrada(KM²) da cidade, insira apenas o valor com o ponto.\n");
    printf("O PIB(Produto Interno Bruto), insira apenas o valor com o ponto.\n");
    printf("O Número de ponto turísticos.\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n");

    // Entrada de dados;
    printf("Carta 1:\n");

    printf("Digite a primeira Letra do Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta: \n");
    scanf(" %2s", numCarta1);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da Cidade: \n");
    fgets(nCidade1, sizeof(nCidade1), stdin);
    nCidade1[strcspn(nCidade1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &nPopulacao_1);

    getchar(); // Limpa o buffer do teclado;
    printf("Digite a área quadrada da cidade: \n");
    scanf("%f", &areaCid_1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &nPTuristicos_1);

    printf("\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");

    printf("Carta 2:\n");

    printf("Digite a primeira Letra do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da cidade: \n");
    scanf(" %2s", numCarta2);

    getchar(); // Limpa o buffer do teclado
    printf("Digite o nome da Cidade: \n");
    fgets(nCidade2, sizeof(nCidade2), stdin);
    nCidade2[strcspn(nCidade2, "\n")] = 0;

    printf("Digite o número de habitante da cidade: \n");
    scanf("%d", &nPopulacao_2);

    printf("Digite a área quadrada da cidade: \n");
    scanf("%f", &areaCid_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &nPTuristicos_2);

    printf("\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n");

    //----------------------------------------------------------------------------------------;

    //Calculos de densidade populacional e PIB per capita;

    //Calculo carta 1
    densidadePopulacional1 = (float) nPopulacao_1 / areaCid_1; //Densidade populacional;

    pibPerCapita1 = (float) pib_1 / nPopulacao_1; //PIB per Capita;

    //calculo carta2
    densidadePopulacional2 = (float) nPopulacao_2 / areaCid_2; //Densidade populacional;

    pibPerCapita2 = (float) pib_2 / nPopulacao_2; //PIB per Capita;

    //----------------------------------------------------------------------------------------;


    //MENU
    int escolherAtributo;

    printf("-----------------------------MENU----------------------------------\n");
    printf("Escolha qual o atributo será usado para comparação entre as cartas:\n");
    printf("====================================================================\n");
    printf("Nome do país(usado apenas para exibir), população, área\n");
    printf("PIB, Nº de pontos turísticos e densidade demográfica.\n");
    printf("====================================================================\n");
    printf("-----------------------REGRAS DE COMPARAÇÃO-------------------------\n");
    printf("#Vence a carta com MAIOR valor no atributo escolhido.\n");
    printf("#Para o atributo de densidade demográfica,a regra\n");
    printf("inverte, vence a carta com MENOR valor.\n");
    printf("====================================================================\n");
    printf("1. Nome da cidade.\n");
    printf("2. Número de habitantes.\n");
    printf("3. Área km² da cidade.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica.\n");
    scanf("%d", &escolherAtributo);
    printf("\n");



    switch (escolherAtributo) {
        case 1:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
        break;
        case 2:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
            printf("Atributo comparado: Número de habitantes\n");
            printf("Nº habitantes da carta 1: %d\n", nPopulacao_1);
            printf("Nº habitantes da carta 2: %d\n", nPopulacao_2);
        break;
        case 3:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
            printf("Atributo comparado: Área em km² da cidade\n");
            printf("Área km² da carta 1: %d\n", areaCid_1);
            printf("Área km² da carta 2: %d\n", areaCid_2);
        break;
        case 4:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
            printf("Atributo comparado: PIB da cidade\n");
            printf("PIB da carta 1: %f\n", pib_1);
            printf("PIB da carta 2: %f\n", pib_2);
        break;
        case 5:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
            printf("Atributo comparado: Número de pontos turísticos da cidade\n");
            printf("Nº de pontos turísticos da carta 1: %d\n", nPTuristicos_1);
            printf("Nº de pontos turísticos da carta 2: %d\n", nPTuristicos_2);
        case 6:
            printf("Cidade carta 1: %s\n", nCidade1);
            printf("Cidade carta 2: %s\n", nCidade2);
            printf("Atributo comparado: Densidade demográfica da cidade\n");
            printf("Densidade demográfica da carta 1: %f\n", densidadePopulacional1);
            printf("Densidade demográfica da carta 2: %f\n", densidadePopulacional2);
        break;

        default: //Mensagem padrão para entrada inválida
            printf("Entrada inválida, não existe essa opção!");

    }

    if (escolherAtributo > 6 && escolherAtributo == 0) {
        printf("+++ OPÇÃO INVÁLIDA +++\n");
    } else if (escolherAtributo == 2) {

        //Comparação de dado populacional
        if (nPopulacao_1 > nPopulacao_2)
        {
            printf("Resultado: Carta (%s) venceu!\n", numCarta1);
        } else if (nPopulacao_1 < nPopulacao_2) {
            printf("Resultado: Carta (%s) venceu!\n", numCarta2);
        } else {
            printf("EMPATE!");
        }

    } else if (escolherAtributo == 3) {

        //Comparação de dado de área
        if (areaCid_1 > areaCid_2)
        {
            printf("Resultado: Carta (%s) venceu!\n", numCarta1);
        } else if (areaCid_1 < areaCid_2) {
            printf("Resultado: Carta (%s) venceu!\n", numCarta2);
        } else {
            printf("EMPATE!");
        }

    } else if (escolherAtributo == 4) {

        //Comparação de dado de área
        if (pib_1 > pib_2)
        {
            printf("Resultado: Carta (%s) venceu!\n", numCarta1);
        } else if (pib_1 < pib_2) {
            printf("Resultado: Carta (%s) venceu!\n", numCarta2);
        } else {
            printf("EMPATE!");
        }

    } else if (escolherAtributo == 5) {

        //Comparação de dado de Ponto turisticos
        if (nPTuristicos_1 > nPTuristicos_2)
        {
            printf("Resultado: Carta (%s) venceu!\n", numCarta1);
        } else if (nPTuristicos_1 < nPTuristicos_2) {
            printf("Resultado: Carta (%s) venceu!\n", numCarta2);
        } else {
            printf("EMPATE!");
        }
    } else if (escolherAtributo == 6) {

        //Comparação de dado de densidade demografica
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Resultado: Carta (%s) venceu!\n", numCarta1);
        } else if (densidadePopulacional1 > densidadePopulacional2) {
            printf("Resultado: Carta (%s) venceu!\n", numCarta2);
        } else {
            printf("EMPATE!");
        }
    }


    

    system("pause");
    return 0;
}
