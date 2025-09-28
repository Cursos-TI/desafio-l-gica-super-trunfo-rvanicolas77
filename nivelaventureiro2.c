
#include <stdio.h>

main(){

 // Área para definição das variáveis para armazenar as propriedades das cidades
 // Variáveis da carta um

       
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float dendidade_populacional1;

     
    // Variáveis da carta dois

    
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float dendidade_populacional2;
    
//variavel para escolhia

    int opcao;

// Área para entrada de dados
    // Entrada de dados da carta um

    printf("Cadastro da Carta 1: \n\n");
    printf("Digite o Nome do pais: \n");
    scanf(" %[^\n]", &pais1);   // Lê string com espaços
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²):  \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados da carta dois

    printf("Cadastro da Carta 2: \n\n");
    printf("Digite o Nome do pais:  \n");
    scanf(" %[^\n]", &pais2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais):  \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
// Area de calculos

    dendidade_populacional1 = (float)populacao1/area1;
   
    dendidade_populacional2 = (float)populacao2/area2;
  
 
 
// ***** Menu ******
   
    printf("******* SUPER TRUNFO - Comparação de Cartas ******\n\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("**************************************************\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n>>> Comparação entre %s e %s <<<\n", pais1, pais2);

    // ---------- Comparação com switch ----------
    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", pais1, pib1);
            printf("%s: %.2f trilhões\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.6f hab/km²\n", pais1, dendidade_populacional1);
            printf("%s: %.6f hab/km²\n", pais2, dendidade_populacional2);

            if (dendidade_populacional1 < dendidade_populacional2) {
                printf("Resultado: %s venceu! (menor densidade)\n", pais1);
            } else if (dendidade_populacional2 < dendidade_populacional1) {
                printf("Resultado: %s venceu! (menor densidade)\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 5.\n");
            break;
    }

    return 0;