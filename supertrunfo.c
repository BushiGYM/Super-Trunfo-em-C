#include <stdio.h>

int main(){
// variaveis da carta 1
    char estado1[] = "A";
    char codigo1[] ="A01" , cidade1[] ="Sao Paulo";
    unsigned int popul1 = 12325000 , turismo1 = 50;
    float area1 = 1521.11 , pib1 = 699.28, PPC1, DP1, superpoder1;
//variaveis da carta 2
    char estado2[] = "B";
    char codigo2[] ="B01" , cidade2[] ="Rio de Janeiro";
    unsigned int popul2 = 6748000 , turismo2 = 30;
    float area2 = 1200.25 , pib2 = 300.50, PPC2, DP2, superpoder2;

    int escolha; //variavel do switch (separada por fins de organização)

/*########################################################################################
foi comentado no código toda a estrutura referente 
ao cadastro das cartas (existe a possibilidade de ser apagado em atualizações vindouras,
ficando salvo apenas nos commits do github.)
os valores utilizados são os exemplos dados na aula 1
########################################################################################*/

    /*carta 1*/
    /*printf("-----CARTA 1-----\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    
    printf("Código da carta: ");
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
    scanf("%d", &turismo1);*/
    
    DP1 = popul1 / area1;
    PPC1 = popul1 / pib1;
    
//inicio da carta 2
  
    /*printf("-----CARTA 2-----\n");
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
    scanf("%d", &turismo2);*/

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
        superpoder1 = (float) popul2 + area2 + pib2 + (float)turismo2 + PPC2 + DP2;
    printf("Super-poder: %.2f\n", superpoder1);
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
// *****MENU INTERATIVO*****

    printf("-----Bem-vindo(A) ao Super Trunfo!-----\n");
    printf("escolha uma caracteristica para comparar:\n");
    printf("1. População.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade populacional.\n");
    printf("6. PIB per capta.\n");
    printf("7. Super-poder.\n");
    scanf("%d", &escolha);

    switch (escolha) {

        case 1:
            if (popul1 > popul2){
                printf("População de %s: %d\n", cidade1, popul1);
                printf("População de %s: %d\n", cidade2, popul2);
                printf("População: %s vence!\n", cidade1);
            } else if (popul1 < popul2){
                printf("População de %s: %d\n", cidade1, popul1);
                printf("População de %s: %d\n", cidade2, popul2);
                printf("População: %s vence!\n", cidade2);
            } else {
                printf("População de %s: %d\n", cidade1, popul1);
                printf("População de %s: %d\n", cidade2, popul2);
                printf("População: empate!\n");
            }
        break;
        case 2:
            if (area1 > area2){
                printf("Area de %s: %f\n", cidade1, area1);
                printf("Area de %s: %f\n", cidade2, area2);
                printf("Área: %s vence!\n", cidade1);
            } else if (area1 < area2){
                printf("Area de %s: %.2f\n", cidade1, area1);
                printf("Area de %s: %.2f\n", cidade2, area2);
                printf("Área: %s vence!\n", cidade2);
            } else {
                printf("Area de %s: %.2f\n", cidade1, area1);
                printf("Area de %s: %.2f\n", cidade2, area2);
                printf("Area: empate!\n");
            }
        break;
        case 3:
            if (pib1 > pib2){
                printf("PIB de %s: %.2f\n", cidade1, pib1);
                printf("PIB de %s: %.2f\n", cidade2, pib2);
                printf("PIB: %s vence!\n", cidade1);
            } else if (pib1 < pib2) {
                printf("PIB de %s: %.2f\n", cidade1, pib1);
                printf("PIB de %s: %.2f\n", cidade2, pib2);
                printf("PIB: %s vence!\n", cidade2);
            } else {
                printf("PIB de %s: %.2f\n", cidade1, pib1);
                printf("PIB de %s: %.2f\n", cidade2, pib2);
                printf("PIB: empate!\n");
            }
        break;
        case 4:
            if (turismo1 > turismo2){
                printf("Pontos turísticos de %s: %d\n", cidade1, turismo1);
                printf("Pontos turísticos de %s: %d\n", cidade2, turismo2);
                printf("Pontos turísticos: %s vence!\n", cidade1);
            } else if (turismo1 < turismo2) {
                printf("Pontos turísticos de %s: %d\n", cidade1, turismo1);
                printf("Pontos turísticos de %s: %d\n", cidade2, turismo2);
                printf("Pontos turísticos: %s vence!\n", cidade2);
            } else {
                printf("Pontos turísticos de %s: %d\n", cidade1, turismo1);
                printf("Pontos turísticos de %s: %d\n", cidade2, turismo2);
                printf("Pontos turísticos: empate!\n");
            }
        break;
        case 5:
            if (DP1 < DP2){
                printf("Densidade populacional de %s: %.2f\n", cidade1, DP1);
                printf("Densidade populacional de %s: %.2f\n", cidade2, DP2);
                printf("Densidade populacional: %s vence!\n", cidade1);
            } else if (DP1 > DP2){
                printf("Densidade populacional de %s: %.2f\n", cidade1, DP1);
                printf("Densidade populacional de %s: %.2f\n", cidade2, DP2);
                printf("Densidade populacional: %s vence!\n", cidade2);
            } else {
                printf("Densidade populacional de %s: %.2f\n", cidade1, DP1);
                printf("Densidade populacional de %s: %.2f\n", cidade2, DP2);
                printf("Densidade Populacional: empate!\n");
            }
        break;
        case 6:
            if (PPC1 > PPC2){
                printf("PIB per capta %s: %.2f\n", cidade1, PPC1);
                printf("PIB per capta de %s: %.2f\n", cidade2, PPC2);
                printf("PIB per capta: %s vence!\n", cidade1);
            } else if (PPC1 < PPC2){
                printf("PIB per capta %s: %.2f\n", cidade1, PPC1);
                printf("PIB per capta de %s: %.2f\n", cidade2, PPC2);
                printf("PIB per capta: %s vence!\n", cidade2);
            } else {
                printf("PIB per capta %s: %.2f\n", cidade1, PPC1);
                printf("PIB per capta de %s: %.2f\n", cidade2, PPC2);
                printf("PIB per capta: empate!\n");
            }
        break;
        case 7:
            if (superpoder1 > superpoder2){
                printf("Super-poder de %s: %f\n", cidade1, superpoder1);
                printf("Super-poder de %s: %.1f\n", cidade2, superpoder2);
                printf("Super-poder: %s vence!\n", cidade1);
            } else if (superpoder1 < superpoder2) {
                printf("Super-poder de %s: %.1f\n", cidade1, superpoder1);
                printf("Super-poder de %s: %.1f\n", cidade2, superpoder2);
                printf("Super-poder: %s vence!\n", cidade2);
            } else {
                printf("Super-poder de %s: %.1f\n", cidade1, superpoder1);
                printf("Super-poder de %s: %.1f\n", cidade2, superpoder2);
                printf("Super-poder: empate!\n");
            }
        break;
        default:
            printf("XXXXOpção InválidaXXXX\n");



    }

    return 0;

}