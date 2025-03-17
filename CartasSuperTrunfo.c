#include <stdio.h>
#include <stdlib.h>


int main(){

    //declarando variavel
    char estado1, estado2;
    char codCarta1[5];
    char codCarta2[5];
    char nomeCidade1[15], nomeCidade2[15];
    int popu1, popu2, pontoTur1, pontoTur2;
    float area1, area2, pib1, pib2;

    printf("Desafio super trunfo \n\n");
    
   //pedindo as informacoes para o usuario
    printf("Digite a letra do estado da primeira carta\n");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta da primeira carta \n");
    scanf("%s", codCarta1);

    printf("Digite o nome da cidade da primeira carta \n");
    scanf("%s", nomeCidade1);
    
    printf("Digite a populacao da primeira carta \n");
    scanf("%d", &popu1);
    
    printf("Digite a quantidade de pontos turisticos da primeira carta\n");
    scanf("%d", &pontoTur1);
    
    printf("Digite o tamanho da area em km² da primeira carta\n");
    scanf("%f", &area1);
    
    printf("Digite o pib do estado da primeira carta\n");
    scanf("%f", &pib1);
    
    printf("\n\n");

    
    printf("AGORA OS DADOS DA SEGUNDA CARTA!!!!\n\n"); // corte para segunda carta

    printf("Digite a letra do estado da segunda carta\n");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta da segunda carta \n");
    scanf("%s", codCarta2);

    printf("Digite o nome da cidade da segunda carta \n");
    scanf("%s", nomeCidade2);
    
    printf("Digite a populacao da segunda carta \n");
    scanf("%d", &popu2);
    
    printf("Digite a quantidade de pontos turisticos da segunda carta\n");
    scanf("%d", &pontoTur2);
    
    printf("Digite o tamanho da area em km² da segunda carta\n");
    scanf("%f", &area2);
    
    printf("Digite o pib do estado da segunda carta\n");
    scanf("%f", &pib2);

    printf("\n\n");

    // imprimir a carta 1
    printf("CARTA 1\n\n");
    printf("Estado: %c \nCodigo: %s \nCidade: %s \nPopulacao: %d \nPontos turisticos: %d \nArea: %2.f \nPib: %2.f \n", estado1, codCarta1, nomeCidade1, popu1, pontoTur1, area1, pib1);
    
    printf("\n\n"); //pular linha
     
    // imprimir a carta 2
    printf("CARTA 2\n\n");
    printf("Estado: %c \nCodigo: %s \nCidade: %s \nPopulacao: %d \nPontos turisticos: %d \nArea: %2.f \nPib: %2.f \n", estado2, codCarta2, nomeCidade2, popu2, pontoTur2, area2, pib2);
    
    
    system("pause"); //para o programa nao fechar automatico

    return 0;

}