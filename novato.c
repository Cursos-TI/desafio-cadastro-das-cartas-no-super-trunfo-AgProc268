#include <stdio.h>

int main(){    
    char estado1[5],estado2[5],codigo1[5],codigo2[5],cidade1[50],cidade2[50];
    int turistico1, turistico2,habitantes1,habitantes2;
    float area1, area2, pib1,pib2;

    printf("Desafio Super Trunfo Novato \n");
    printf("Inicie o cadastro das suas cartas. \n");

    printf("Qual codigo da sua carta? \n");
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

    printf("Carta Cadastrada com Sucesso! Continue cadastrando a próxima carta \n");

    printf("Qual codigo da sua carta? \n");
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
    scanf("%f", &area2);

    printf("Qual a renda Per Capita da cidade \n");
    scanf("%f", &pib2);

    printf("Cadastro concluído! Confira suas cartas cadastradas: \n");

    printf("Carta 1 :\n");
    printf("Estado:%s \n",estado1);
    printf("Código da Carta: %s \n",codigo1);
    printf("Cidade: %s \n",cidade1);
    printf("População: %d habitantes \n",habitantes1);
    printf("Área: %f km \n", area1);
    printf("PIB: %f bilhões de reais \n",pib1);
    printf("Número de pontos turisticos: %d \n",turistico1);

    printf("Carta 2 :\n");
    printf("Estado:%s \n",estado2);
    printf("Código da Carta: %s \n",codigo2);
    printf("Cidade: %s \n",cidade2);
    printf("População: %d habitantes \n",habitantes2);
    printf("Área: %f km \n", area2);
    printf("PIB: %f bilhões de reais \n",pib2);
    printf("Número de pontos turisticos: %d \n",turistico2);

    return 0;

}
