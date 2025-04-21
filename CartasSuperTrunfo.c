#include <stdio.h>

int main()
{
    \\aqui seguem as variaveis
    char _letraestado1; 
    char _codigoestado1[3];
    char _nomecidade1[50];
    int _populacaocidade1;
    float _areacidade1;
    float _pibcidade1;
    int _turisticocidade1;

    printf("Digite uma letra (entre A e H) do estado da carta 1:\n");
    scanf("%c", &_letraestado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
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

    printf("Dados da carta 1:\n");
    printf("\n");
    printf("A letra do estado da carta 1 é: %c\n", _letraestado1);
    printf("O código do estado da carta 1 é: %s\n", _codigoestado1);
    printf("O nome da cidade da carta 1 é: %s\n", _nomecidade1);
    printf("A população da cidade da carta 1 é: %d\n", _populacaocidade1);
    printf("A área da cidade da carta 1 é: %.2f\n", _areacidade1);
    printf("O PIB da cidade da carta 1 é: %.2f\n", _pibcidade1);
    printf("O número de pontos turísticos da cidade da carta 1 é: %d\n", _turisticocidade1);
}