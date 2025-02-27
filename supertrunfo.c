#include <stdio.h>


int main(){
// variaveis da carta 1
    char estado1;
    char codigo1[5] , cidade1[51];
    int popul1 , turismo1;
    float area1 , pib1;
//variaveis da carta 2
    char estado2;
    char codigo2[5] , cidade2[51];
    int popul2 , turismo2;
    float area2 , pib2;
    
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
//apresentação da carta 1

    printf("-----CARTA 1-----\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", popul1);
    printf("Area da cidade: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", turismo1);
    printf("------------------ \n");
// apresentacao da carta 2
    printf("-----CARTA 2-----\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", popul2);
    printf("Area da cidade: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turisticos: %d \n", turismo2);
    printf("------------------");

    return 0;

}