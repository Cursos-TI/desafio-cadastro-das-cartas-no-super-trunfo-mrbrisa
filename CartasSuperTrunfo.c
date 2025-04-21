#include <stdio.h> //Inlcui biblioteca padrão

/*
Por algum motivo que eu desisti de tentar entender, quando tento rodar o programa no VSCode instalado no meu PC, ele não exibe as informações da "_letraestado1" e "_letraestado2" no exibição do console,
porém, a informação aparece no VSCode do GitHub. Apenas aceitei o destino e segui com o projeto, que é onde eu acho que ele será avaliado, mas gostaria de entender o motivo disso
*/

int main()
    {
    //Início da criação de variáveis para a carta 1
        char _letraestado1;
        char _codigoestado1[4];
        char _nomecidade1[50];
        int _populacaocidade1;
        float _areacidade1;
        float _pibcidade1;
        int _turisticocidade1;
    //Fim da criação de variáveis para a carta 1

    //Coleta de dados da carta 1
        printf("Digite uma letra (entre A e H) do estado da carta 1:\n");
        scanf(" %c", &_letraestado1);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) para a carta 1:\n");
        scanf("%s", _codigoestado1);

        printf("Digite o nome da cidade da carta 1:\n");
        scanf("%s", _nomecidade1);

        printf("Digite a população da cidade da carta 1:\n");
        scanf("%d", &_populacaocidade1);

        printf("Digite a área da cidade da carta 1:\n");
        scanf("%f", &_areacidade1);

        printf("Digite o PIB da cidade da carta 1:\n");
        scanf("%f", &_pibcidade1);

        printf("Digite o número de pontos turísticos da cidade da carta 1:\n");
        scanf("%d", &_turisticocidade1);
    //Fim da coleta de dados da carta 1

    //Início da exibição de informações da carta 1
        printf("Dados da carta 1:\n");
        printf("\n"); //Espaço pois achei que ficou uma boa formação no console
        printf("A letra do estado da carta 1 é: %c\n", _letraestado1);
        printf("O código do estado da carta 1 é: %s\n", _codigoestado1);
        printf("O nome da cidade da carta 1 é: %s\n", _nomecidade1);
        printf("A população da cidade da carta 1 é: %d\n", _populacaocidade1);
        printf("A área da cidade da carta 1 é: %.2f\n", _areacidade1);
        printf("O PIB da cidade da carta 1 é: %.2f\n", _pibcidade1);
        printf("O número de pontos turísticos da cidade da carta 1 é: %d\n", _turisticocidade1);
        printf("\n"); //Espaço tanto para formatação quanto para melhor visualização da próxima entrada de dados
    //Fim da exibição de informações da carta 1


        //Início da criação de variáveis para a carta 2
            char _letraestado2;
            char _codigoestado2[4];
            char _nomecidade2[50];
            int _populacaocidade2;
            float _areacidade2;
            float _pibcidade2;
            int _turisticocidade2;
        //Fim da criação de variáveis para a carta 2

        //Coleta de dados da carta 2
            printf("Digite uma letra (entre A e H) do estado da carta 2:\n");
            scanf(" %c", &_letraestado2);

            printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) para a carta 2:\n");
            scanf("%s", _codigoestado2);

            printf("Digite o nome da cidade da carta 2:\n");
            scanf("%s", _nomecidade2);

            printf("Digite a população da cidade da carta 2:\n");
            scanf("%d", &_populacaocidade2);

            printf("Digite a área da cidade da carta 2:\n");
            scanf("%f", &_areacidade2);

            printf("Digite o PIB da cidade da carta 2:\n");
            scanf("%f", &_pibcidade2);

            printf("Digite o número de pontos turísticos da cidade da carta 2:\n");
            scanf("%d", &_turisticocidade2);
        //Fim da coleta de dados da carta 2
            
        //Início da exibição de informações da carta 2
            printf("Dados da carta 2:\n");
            printf("\n"); //Novamente o espaço prezando a formatação e exibição
            printf("A letra do estado da carta 2 é: %c\n", _letraestado2);
            printf("O código do estado da carta 2 é: %s\n", _codigoestado2);
            printf("O nome da cidade da carta 2 é: %s\n", _nomecidade2);
            printf("A população da cidade da carta 2 é: %d\n", _populacaocidade2);
            printf("A área da cidade da carta 2 é: %.2f\n", _areacidade2);
            printf("O PIB da cidade da carta 2 é: %.2f\n", _pibcidade2);
            printf("O número de pontos turísticos da cidade da carta 2 é: %d\n", _turisticocidade2);
        //Fim da exibição de informações da carta 2
//Encerrando a execução
    return 0;
//Encerrando a execução
    }