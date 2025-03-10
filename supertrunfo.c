#include <stdio.h>

int main(){
// variaveis da carta 1
    char estado1;
    char codigo1[5] , cidade1[51];
    int popul1 , turismo1;
    float area1 , pib1, PPC1, DP1, superpoder1;
//variaveis da carta 2
    char estado2;
    char codigo2[5] , cidade2[51];
    int popul2 , turismo2;
    float area2 , pib2, PPC2, DP2, superpoder2;


    
    /*carta 1*/
    printf("-----CARTA 1-----\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    
    printf("Código da carta: "); /*letra do estado seguida de um numero de 01 a 04*/
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, 51, stdin);

    printf("Populacao: ");
    scanf("%d", &popul1);

    printf("Area da cidade: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Qtd. de Pontos turísticos: ");
    scanf("%d", &turismo1);
    
    DP1 = popul1 / area1;
    PPC1 = popul1 / pib1;
    
//inicio da carta 2
  
    printf("-----CARTA 2-----\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, 51, stdin);

    printf("Populacao: ");
    scanf("%d", &popul2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Qtd. de Pontos turisticos: ");
    scanf("%d", &turismo2);

    DP2 = popul2 / area2;
    PPC2 = popul2 / pib2;

//apresentação da carta 1

    printf("-----CARTA 1-----\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", popul1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$%.2f \n", pib1);
    printf("Pontos turisticos: %d \n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n" , DP1);
    printf("PIB per capta: R$%.2f Bilhões\n", PPC1);
    printf("------------------ \n");
// apresentacao da carta 2
    printf("-----CARTA 2-----\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", popul2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Pontos turisticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n" , DP2);
    printf("PIB per capta: R$%.2f Bilhões\n", PPC2);
        superpoder2 = (float) popul2 + area2 + pib2 + (float)turismo2 + PPC2 + DP2;
    printf("Super-poder: %.2f\n", superpoder2);
    printf("-----------------\n");

// prova da força das cartas

        popul1 > popul2 ? printf("População: A Carta 1 ganhou!\n") : printf("População: A carta 2 ganhou!\n");
        area1 > area2 ? printf("Area: A Carta 1 ganhou!\n") : printf("Area: A carta 2 ganhou!\n");
        pib1 > pib2 ? printf("PIB: A Carta 1 ganhou!\n") : printf("PIB: A carta 2 ganhou!\n");
        turismo1 > turismo2 ? printf("Pontos turísticos: A Carta 1 ganhou!\n") : printf("Pontos turísticos: A carta 2 ganhou!\n");
        DP1 < DP2 ? printf("Densidade populacional: A Carta 1 ganhou!\n") : printf("Densidade populacional: A carta 2 ganhou!\n");
        PPC1 > PPC2 ? printf("PIB per capta: A Carta 1 ganhou!\n") : printf("PIB per capta: A carta 2 ganhou!\n");
        superpoder1> superpoder2 ? printf("Super-poder: A carta 1 ganhou!\n") : printf("Super-poder: A carta 2 ganhou!\n");


    return 0;

}