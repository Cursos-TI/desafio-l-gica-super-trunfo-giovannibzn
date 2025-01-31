#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int codigoCarta1, pontosTuristicosCarta1;
    char nomeCarta1[20];
    double populacaoCarta1, areaCarta1, pibCarta1;

    int codigoCarta2, pontosTuristicosCarta2;
    char nomeCarta2[20];
    double populacaoCarta2, areaCarta2, pibCarta2;

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nomeCarta1);

    printf("Digite o código da cidade 1: \n");
    scanf("%d", &codigoCarta1);

    printf("Digite a população da cidade 1: \n");
    scanf("%lf", &populacaoCarta1);

    printf("Digite o pib da cidade 1: \n");
    scanf("%lf", &pibCarta1);

    printf("Digite a area da cidade 1: \n");
    scanf("%lf", &areaCarta1);

    printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf("%d", &pontosTuristicosCarta1);

    printf("-------------------------------------------------\n");

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomeCarta2);

    printf("Digite o código da cidade 2: \n");
    scanf("%d", &codigoCarta2);

    printf("Digite a população da cidade 2: \n");
    scanf("%lf", &populacaoCarta2);

    printf("Digite o pib da cidade 2: \n");
    scanf("%lf", &pibCarta2);

    printf("Digite a area da cidade 2: \n");
    scanf("%lf", &areaCarta2);

    printf("Digite a quantidade de pontos turisticos da cidade 2: \n");
    scanf("%d", &pontosTuristicosCarta2);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("\n");
    printf("Nome da cidade: %s\n", nomeCarta1);
    printf("Código da cidade: %d\n", codigoCarta1);
    printf("População da cidade: %.2lf\n", populacaoCarta1);
    printf("PIB da cidade: %.2lf\n", pibCarta1);
    printf("Area da cidade: %.2lf\n", areaCarta1);
    printf("Número de pontos turisticos da cidade: %d\n", pontosTuristicosCarta1);
    printf("\n");
    printf("-------------------------------------------------");
    printf("\n");
    printf("Nome da cidade: %s\n", nomeCarta2);
    printf("Código da cidade: %d\n", codigoCarta2);
    printf("População da cidade: %.2lf\n", populacaoCarta2);
    printf("PIB da cidade: %.2lf\n", pibCarta2);
    printf("Area da cidade: %.2lf\n", areaCarta2);
    printf("Número de pontos turisticos da cidade: %d\n", pontosTuristicosCarta2);
    printf("\n");
    printf("-------------------------------------------------\n");
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if(populacaoCarta1 > populacaoCarta2){
        printf("A carta 1 da cidade %s, tem a popução maior.\n", nomeCarta1);
        pontosCarta1;
    }else if(populacaoCarta1 < populacaoCarta2){
        printf("A carta 2 da cidade %s, tem a popução maior.\n", nomeCarta2);
        pontosCarta2++;
    } else{
        printf("A população das cidades são iguais.\n");
    }

    if(pibCarta1 > pibCarta2){
        printf("A carta 1 da cidade %s, tem o PIB maior.\n", nomeCarta1);
        pontosCarta1++;
    }else if(pibCarta1 < pibCarta2){
        printf("A carta 2 da cidade %s, temo PIB maior.\n", nomeCarta2);
        pontosCarta2++;
    } else{
        printf("O PIB das cidades são iguais.\n");
    }

    if(areaCarta1 > areaCarta2){
        printf("A carta 1 da cidade %s, tem a área maior.\n", nomeCarta1);
        pontosCarta1++;
    }else if(areaCarta1 < areaCarta2){
        printf("A carta 2 da cidade %s, tem a área maior.\n", nomeCarta2);
        pontosCarta2++;
    } else{
        printf("A área das cidades são iguais.\n");
    }

    if(pontosTuristicosCarta1 > pontosTuristicosCarta2){
        printf("A carta 1 da cidade %s, tem mais pontos turisticos.\n", nomeCarta1);
        pontosCarta1++;
    }else if(pontosTuristicosCarta1 < pontosTuristicosCarta2){
        printf("A carta 2 da cidade %s, tem mais pontos turisticos.\n", nomeCarta2);
        pontosCarta2++;
    } else{
        printf("A quantidade de pontos turisticos das cidades são iguais.\n");
    }
    printf("\n");

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    if(pontosCarta1 > pontosCarta2){
        printf("A cidade da carta 1 %s, ganhou com um total de %d pontos\n", nomeCarta1, pontosCarta1);
    } else if(pontosCarta1 < pontosCarta2){
        printf("A cidade da carta 2 %s, ganhou com um total de %d pontos\n", nomeCarta2, pontosCarta2);
    } else{
        printf("A cartas empataram com a pontuação %d\n", pontosCarta1);
    }
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("\n");
    return 0;
}
