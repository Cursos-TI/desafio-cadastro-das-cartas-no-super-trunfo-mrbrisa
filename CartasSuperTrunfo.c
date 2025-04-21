#include <stdio.h> //Inlcui biblioteca padrão

/*
Por algum motivo que eu desisti de tentar entender, quando tento rodar o programa no VSCode instalado no meu PC, ele não exibe as informações da "_letraestado1" e "_letraestado2" no exibição do console,
porém, a informação aparece no VSCode do GitHub. Apenas aceitei o destino e segui com o projeto, que é onde eu acho que ele será avaliado, mas gostaria de entender o motivo disso
*/

//Atualizando para usar struct
struct STRcarta
{
    char letraestado;
    char codigoestado[4];
    char nomecidade[50];
    int populacaocidade;
    float areacidade;
    float pibcidade;
    int turisticocidade;
};
//Atualizando para usar struct

/*O CONSOLE LOCAL VOLTOU A MOSTRAR A LETRA DO ESTADO APÓS MUDAR PARA STRUCT, O QUE É BOM, MAS AINDA NÃO SEI O MOTIVO DISSO*/

int main()
    {
    //Declaranto struct para as cartas 1 e 2
        struct STRcarta carta1, carta2;
    //Fim da declaração para as cartas 1 e 2

    //Coleta de dados da carta 1
        printf("Digite uma letra (entre A e H) do estado da carta 1:\n");
        scanf(" %c", &carta1.letraestado);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) para a carta 1:\n");
        scanf("%s", carta1.codigoestado);

        printf("Digite o nome da cidade da carta 1:\n");
        scanf("%s", carta1.nomecidade);

        printf("Digite a população da cidade da carta 1:\n");
        scanf("%d", &carta1.populacaocidade);

        printf("Digite a área da cidade da carta 1:\n");
        scanf("%f", &carta1.areacidade);

        printf("Digite o PIB da cidade da carta 1:\n");
        scanf("%f", &carta1.pibcidade);

        printf("Digite o número de pontos turísticos da cidade da carta 1:\n");
        scanf("%d", &carta1.turisticocidade);
    //Fim da coleta de dados da carta 1

    //Início da exibição de informações da carta 1
        printf("Dados da carta 1:\n");
        printf("\n"); //Espaço pois achei que ficou uma boa formatação no console
        printf("A letra do estado da carta 1 é: %c\n", carta1.letraestado);
        printf("O código do estado da carta 1 é: %s\n", carta1.codigoestado);
        printf("O nome da cidade da carta 1 é: %s\n", carta1.nomecidade);
        printf("A população da cidade da carta 1 é: %d\n", carta1.populacaocidade);
        printf("A área da cidade da carta 1 é: %.2f\n", carta1.areacidade);
        printf("O PIB da cidade da carta 1 é: %.2f\n", carta1.pibcidade);
        printf("O número de pontos turísticos da cidade da carta 1 é: %d\n", carta1.turisticocidade);
        printf("\n"); //Espaço tanto para formatação quanto para melhor visualização da próxima entrada de dados
    //Fim da exibição de informações da carta 1



        //Coleta de dados da carta 2
            printf("Digite uma letra (entre A e H) do estado da carta 2:\n");
            scanf(" %c", &carta2.letraestado);

            printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) para a carta 2:\n");
            scanf("%s", carta2.codigoestado);

            printf("Digite o nome da cidade da carta 2:\n");
            scanf("%s", carta2.nomecidade);

            printf("Digite a população da cidade da carta 2:\n");
            scanf("%d", &carta2.populacaocidade);

            printf("Digite a área da cidade da carta 2:\n");
            scanf("%f", &carta2.areacidade);

            printf("Digite o PIB da cidade da carta 2:\n");
            scanf("%f", &carta2.pibcidade);

            printf("Digite o número de pontos turísticos da cidade da carta 2:\n");
            scanf("%d", &carta2.turisticocidade);
        //Fim da coleta de dados da carta 2
            
        //Início da exibição de informações da carta 2
            printf("Dados da carta 2:\n");
            printf("\n"); //Novamente o espaço prezando a formatação e exibição
            printf("A letra do estado da carta 2 é: %c\n", carta2.letraestado);
            printf("O código do estado da carta 2 é: %s\n", carta2.codigoestado);
            printf("O nome da cidade da carta 2 é: %s\n", carta2.nomecidade);
            printf("A população da cidade da carta 2 é: %d\n", carta2.populacaocidade);
            printf("A área da cidade da carta 2 é: %.2f\n", carta2.areacidade);
            printf("O PIB da cidade da carta 2 é: %.2f\n", carta2.pibcidade);
            printf("O número de pontos turísticos da cidade da carta 2 é: %d\n", carta2.turisticocidade);
        //Fim da exibição de informações da carta 2
//Encerrando a execução
    return 0;
//Encerrando a execução
    }