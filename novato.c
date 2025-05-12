#include <stdio.h>

int main(){    
    char estado1[5],estado2[5],codigo1[5],codigo2[5],cidade1[50],cidade2[50];
    int turistico1, turistico2,habitantes1,habitantes2, superpoder1, superpoder2;
    float area1, area2, pib1,pib2,percapita1, percapita2, densidade1, densidade2;

    densidade1= (float) habitantes1/area1;
    densidade2= (float) habitantes2/area2;
    percapita1= pib1/(float)habitantes1 *1000000;
    percapita2= pib2/(float)habitantes2 *1000000;

    superpoder1= habitantes1 + area1 + pib1 + turistico1 + percapita1 + (1.0f/densidade1);
    superpoder2= habitantes2 + area2 + pib2 + turistico2 + percapita2 + (1.0f/densidade2);



    printf("Vamos cadastrar sua carta? \n");

    printf("\n Qual codigo da sua carta? \n");
    scanf("%s",&codigo1);

    printf("Insira a sigla pertencente ao estado de sua carta \n");
    scanf("%s",&estado1);

    printf("Digite o nome da cidade que sua carta representa \n");
    scanf("%s",&cidade1);

    printf("Quantos pontos turisticos existem nessa cidade \n");
    scanf("%s",&turistico1);

    printf("Qual número de habitantes declarados na cidade \n");
    scanf("%d", &habitantes1);

    printf("Qual é a extensão do território da cidade \n");
    scanf("%f", &area1);

    printf("Qual a renda Per Capita da cidade \n");
    scanf("%f", &pib1);

    printf("Carta Cadastrada com Sucesso! Vamos cadastrar sua próxima carta \n");

    printf("\n Qual codigo da sua carta? \n");
    scanf("%s",&codigo2);

    printf("Insira a sigla pertencente ao estado de sua carta \n");
    scanf("%s",&estado2);

    printf("Digite o nome da cidade que sua carta representa \n");
    scanf("%s",&cidade2);

    printf("Quantos pontos turisticos existem nessa cidade \n");
    scanf("%d",&turistico2);

    printf("Qual número de habitantes declarados na cidade \n");
    scanf("%d", &habitantes2);

    printf("Qual é a extensão do território da cidade \n");
    scanf("%.2f", &area2);

    printf("Qual a renda Per Capita da cidade \n");
    scanf("%.2f", &pib2);

    printf("Cadastro concluído! Confira suas cartas cadastradas: \n");

    printf("Carta 1 :\n");
    printf("Estado:%s \n",estado1);
    printf("Código da Carta: %s \n",codigo1);
    printf("Cidade: %s \n",cidade1);
    printf("População: %d habitantes \n",habitantes1);
    printf("Área: %.2f km \n", area1);
    printf("PIB: %.2f bilhões de reais \n",pib1);
    printf("Número de pontos turisticos: %d \n",turistico1);
    printf("A densidade populacionnal da cidade é:%.2f hab/km²\n", densidade1);
    printf("O PIB per capita da cidade é :%.2f \n",percapita1 );

    printf("Carta 2 :\n");
    printf("Estado:%s \n",estado2);
    printf("Código da Carta: %s \n",codigo2);
    printf("Cidade: %s \n",cidade2);
    printf("População: %d habitantes \n",habitantes2);
    printf("Área: %.2f km \n", area2);
    printf("PIB: %.2f bilhões de reais \n",pib2);
    printf("Número de pontos turisticos: %d \n",turistico2);
    printf("A densidade populacionnal da cidade é:%.2f hab/km²\n", densidade2);
    printf("O PIB per capita da cidade é :%.2f \n",percapita2 );

 if (habitantes1 > habitantes2) {
    printf("População: Carta 1 venceu (%.2f)\n");
    } else {
    printf("População: Carta 2 venceu (%.2f)\n");
    }

    if (area1 > area2) {
    printf("Área: Carta 1 venceu (%.2f)\n");
    } else {
    printf("Área: Carta 2 venceu (%.2f)\n");
    }

    if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu!\n");
    } else {
    printf("PIB: Carta 2 venceu!\n");
    }
    
    if (turistico1 > turistico2) {
    printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else {
    printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
    
    if (densidade1 < densidade2) {
    printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
    printf("Densidade Populacional: Carta 2 venceu!\n");
    }

        if (percapita1 > percapita2) {
    printf("PIB per capita: Carta 1 venceu!\n");
    } else {
    printf("PIB per capita: Carta 2 venceu!\n");
    }
    
    if (superpoder1 > superpoder2) {
    printf("Super Poder: Carta 1 venceu!\n");
    } else {
    printf("Super Poder: Carta 2 venceu!\n");
    }


    return 0;
