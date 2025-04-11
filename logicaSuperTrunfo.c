#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

/*PROGRAMA: SUPER TRUNFO LÓGICA
 *ALUNO: MATHEUS AVELINO
 *INSTITUIÇÃO: ESTACIO DE SÁ
 *PROF: SERGIO CARDOSO
 *DATA: 10/04/2025
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


    //Apresentação dos dados na tela de ambas as cartas;
    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", numCarta1);
    printf("Nome da Cidade: %s\n", nCidade1);
    printf("População: %d\n", nPopulacao_1);
    printf("Área (em KM²): %.2f\n", areaCid_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", numCarta2);
    printf("Nome da Cidade: %s\n", nCidade2);
    printf("População: %d\n", nPopulacao_2);
    printf("Área (em KM²): %.2f\n", areaCid_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de pontos Turísticos: %d\n", nPTuristicos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n");

    //----------------------------------------------------------------------------------------;


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //LÓGICA DE COMPARAÇÃO;
    //númerico: população, area, pib, densidade, pib per capita, pontos turisticos;

    //Comparação de população
    printf("Comparação de cartas atributo: População\n");
    printf("Carta 1 - %s (%c): %d\n", nCidade1, estado1, nPopulacao_1 );
    printf("Carta 2 - %s (%c): %d\n", nCidade2, estado2, nPopulacao_2 );


    if (nPopulacao_1 > nPopulacao_2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");

    //Comparação de área km²
    printf("Comparação de cartas atributo: Área Km²\n");
    printf("Carta 1 - %s (%c): %.2f\n", nCidade1, estado1, areaCid_1 );
    printf("Carta 2 - %s (%c): %.2f\n", nCidade2, estado2, areaCid_2);


    if (areaCid_1 > areaCid_2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");

    //Comparação de PIB
    printf("Comparação de cartas atributo: PIB\n");
    printf("Carta 1 - %s (%c): %.2f\n", nCidade1, estado1, pib_1 );
    printf("Carta 2 - %s (%c): %.2f\n", nCidade2, estado2, pib_2 );


    if (pib_1 > pib_2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");
    
    //Comparação de Densidade populacional
    printf("Comparação de cartas atributo: Densidade Populacional\n");
    printf("Carta 1 - %s (%c): %.2f\n", nCidade1, estado1, densidadePopulacional1 );
    printf("Carta 2 - %s (%c): %.2f\n", nCidade2, estado2, densidadePopulacional2 );


    if ( 500.0 <= densidadePopulacional1)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else if (500.0 <= densidadePopulacional2)
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");
    
    //Comparação de PIB per Capita
    printf("Comparação de cartas atributo: PIB per Capita\n");
    printf("Carta 1 - %s (%c): %f\n", nCidade1, estado1, pibPerCapita1 );
    printf("Carta 2 - %s (%c): %f\n", nCidade2, estado2, pibPerCapita2);


    if (pibPerCapita1 > pibPerCapita2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");

    //Comparação de Pontos Turísticos
    printf("Comparação de cartas atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s (%c): %d\n", nCidade1, estado1, nPTuristicos_1);
    printf("Carta 2 - %s (%c): %d\n", nCidade2, estado2, nPTuristicos_2);


    if (nPTuristicos_1 > nPTuristicos_2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nCidade2);
    }
    printf("\n");

    system("pause");
    return 0;
}
