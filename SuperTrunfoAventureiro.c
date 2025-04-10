#include <stdio.h>


int main() {
    //Declaracao de variaveis
    
    
    //Variaveis primeira cidade;
    char estado1;
    char codigo1[4];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidadepopulacional1, pibpercapita1;

    //Variáveis Segunda cidade;
    char estado2;
    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidadepopulacional2, pibpercapita2;

    //Coleta dos Dados da Primeira cidade;
    printf("DADOS DA CIDADE 01:\n");
    printf("Digite o Estado (ex:A): ");
    scanf("%c", &estado1);

    printf("Digite o Código da cidade (ex: A01): ");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);


    //Coleta dos Dados da Segunda cidade;
    printf("\n");
    printf("DADOS DA CIDADE 02:\n");
    printf("Digite o estado (ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da cidade (ex: B01): ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;
    

    //Informações e dados da Primeira Cidade;
    printf("\n\n");
    printf("DADOS DA PRIMEIRA CIDADE\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.0f Km²\n", area1);
    printf("PIB: %.0f Milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB Per Capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);

    //Informações e dados da Segunda Cidade;
    printf("\n\n");
    printf("DADOS DA SEGUNDA CIDADE\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0f Km²\n", area2);
    printf("PIB: %.0f Milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB Per Capita: %.2f\n", pibpercapita2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);

    printf("\n\n");


return 0;

}