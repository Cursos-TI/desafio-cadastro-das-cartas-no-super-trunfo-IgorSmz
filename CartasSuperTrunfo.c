#include <stdio.h>
#include <stdlib.h>


float Divisao (float num1, float num2){ //criei essa funcao pra fazer a densidade e o pib per capita
    float resultado;

    resultado = num1 / num2;

    return resultado;
}


int main(){

    //declarando variavel
    char estado1, estado2;
    char codCarta1[5];
    char codCarta2[5];
    char nomeCidade1[15], nomeCidade2[15];
    int popu1, popu2, pontoTur1, pontoTur2;
    float area1, area2, pib1, pib2;

    printf("Desafio super trunfo Aventureiro\n\n");
    
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
    
    printf("Digite o pib em bilhoes da cidade da primeira carta\n");
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
    
    printf("Digite o pib da cidade da segunda carta\n");
    scanf("%f", &pib2);
    
    // chamei a funcao para me auxiliar nas divisoes e deixar o codigo mais limpo

    float densidade1 =   Divisao((float) popu1, area1); 
    float densidade2 =   Divisao((float) popu2, area2);
    float pibPerCap1 =   Divisao(pib1,  (float) popu1)*1000000000; // multipliquei por 1bi pra mostaro valor correto e converti pra float pq populacao e 'int'
    float pibPerCap2 =   Divisao(pib2,  (float) popu2)*1000000000;

    float superPoder1 = (float) popu1 + (float) pontoTur1 + area1 + pib1 - densidade1 + pibPerCap1;
    float superPoder2 = (float) popu2 + (float) pontoTur2 + area2 + pib2 - densidade2 + pibPerCap2;
    
    printf("\n\n");

    // imprimir a carta 1
    printf("CARTA 1\n\n");
    printf("Estado: %c \nCodigo: %s \nCidade: %s \nPopulacao: %d \n", estado1, codCarta1, nomeCidade1, popu1 );
    printf("Pontos turisticos: %d \nArea: %2.f km² \nPib: %2.f Bilhoes de reais \nDensidade: %.3f\nPib Per cap %.3f\n", pontoTur1, area1, pib1,densidade1,pibPerCap1);
    
    printf("\n\n"); //pular linha
     
    //imprimir a carta 2
    printf("CARTA 2\n\n");
    printf("Estado: %c \nCodigo: %s \nCidade: %s \nPopulacao: %d \n", estado2, codCarta2, nomeCidade2, popu2 );
    printf("Pontos turisticos: %d \nArea: %2.f km² \nPib: %2.f  Bilhoes de reais \nDensidade: %.3f\nPib Per cap %.3f\n", pontoTur2, area2, pib2,densidade2,pibPerCap2);

    
    printf("\n\n");
    printf("******comparacao das cartas*****\n\n");

    
   
    printf("Populacao carta 1: %d e maior que a populacao carta 2: %d resultado: %d \n", popu1, popu2, (popu1 > popu2));
    printf("Pontos Turisticos carta 1: %d e maior que os pontos turisticos da carta 2: %d resultado: %d \n", pontoTur1 , pontoTur2 , (pontoTur1>pontoTur2));
    printf("Area da carta 1: %f e maior que a area da carta 2: %f resultado: %d \n",area1,area2,(area1>area2));
    printf("Pib da carta 1: %f e maior que o Pib da carta 2: %f resultado: %d\n",pib1,pib2,(pib1>pib2));
    printf("Densidade populacional da carta 1: %.2f e menor que da carta 2: %.2f resultado: %d\n",densidade1,densidade2,(densidade1<densidade2));
    printf("Pib per capita da carta 1: %.2f e maior que da carta 2: %.2f resultado: %d\n",pibPerCap1,pibPerCap2,(pibPerCap1>pibPerCap2));
    printf("Super poder da carta 1 %.2f e maior que da carta 2: %.2f resultado %d\n",superPoder1,superPoder2,(superPoder1>superPoder2));

   
    
    system("pause"); //para o programa nao fechar automatico

    return 0;

}