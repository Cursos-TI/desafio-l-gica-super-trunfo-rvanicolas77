
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
    

// Área para entrada de dados por usuario
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
 // Para escolha dos atributos por usuario
 int escolha1,escolha2;


// ***** Menu primeiro******
   
    printf("******* SUPER TRUNFO - Comparação de Cartas ******\n\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("**************************************************\n");
    printf("Opção1: ");
    scanf("%d", &escolha1);
// ***** Menu segundo******
   
    printf("******* SUPER TRUNFO - Comparação de Cartas ******\n\n");
    printf("Escolha o segundo atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("**************************************************\n");
    printf("Opção2: ");
    scanf("%d", &escolha2);

if(escolha1==escolha2){
    printf("você não pode escolher o mesmo actributo duas vezes \n");
    return(1);
}

    printf("\n>>> Comparação entre os attributos das opçãos de menu: %d e %d dos paises %s e %s <<<\n", escolha1,escolha2,pais1, pais2);

    // ---------- Comparação com switch ----------
    
    int resultadoattr1=0, resultadoattr2=0;

    
    
    switch(escolha1) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            resultadoattr1=populacao1>populacao2?1:0;
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            resultadoattr1= area1 > area2?1:0;
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", pais1, pib1);
            printf("%s: %.2f trilhões\n", pais2, pib2);

           resultadoattr1= pib1 > pib2?1:0;
           
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", pais2, pontosTuristicos2);

            resultadoattr1= pontosTuristicos1 > pontosTuristicos2?1:0;
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.6f hab/km²\n", pais1, dendidade_populacional1);
            printf("%s: %.6f hab/km²\n", pais2, dendidade_populacional2);

            resultadoattr1= dendidade_populacional1 < dendidade_populacional2?1:0;
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 5.\n");
            break;
    }

    switch(escolha2) {
        case 1: // População
            printf(" Atributo: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            resultadoattr2=populacao1>populacao2?1:0;
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            resultadoattr2= area1 > area2?1:0;
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", pais1, pib1);
            printf("%s: %.2f trilhões\n", pais2, pib2);

            resultadoattr2=pib1 > pib2?1:0;
           
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", pais2, pontosTuristicos2);

             resultadoattr2= pontosTuristicos1 > pontosTuristicos2?1:0;
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.6f hab/km²\n", pais1, dendidade_populacional1);
            printf("%s: %.6f hab/km²\n", pais2, dendidade_populacional2);

            resultadoattr2= dendidade_populacional1 < dendidade_populacional2?1:0;
            break;

        default:
            printf("Opção inválida! Escolha de 1 a 5.\n");
            break;
    }
   
    // qual carta venceu

printf("*******Qual carta venceu:********\n");
    if(resultadoattr1&&resultadoattr2){
        printf("a carta do pais:%s venceu!",pais1);
    }else if (resultadoattr1!=resultadoattr2){
        printf("empate das cartas dos paises: %s e %s\n", pais1,pais2);
    }else {printf("a carta do pais:%s venceu!\n",pais2);
    }
    return 0;


}