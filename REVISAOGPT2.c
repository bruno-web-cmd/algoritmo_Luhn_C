#include <stdio.h>

int main() {
    int opcao;
    int num1, num2;
    int soma, sub, mult;
    float divisao;

    printf("Seja bem-vindo ao sistema de calculadora basico!\n");
    printf("1 - Soma\n");
    printf("2 - Multiplicacao\n");
    printf("3 - Divisao\n");
    printf("4 - Subtracao\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {

        printf("Opcao selecionada: Soma.\n");

        printf("Digite um numero: ");
        scanf("%d", &num1);

        printf("Digite outro numero: ");
        scanf("%d", &num2);

        soma = num1 + num2;

        printf("Resultado = %d", soma);

    } else if (opcao == 2) {

        printf("Opcao selecionada: Multiplicacao.\n");

        printf("Digite um numero: ");
        scanf("%d", &num1);

        printf("Digite outro numero: ");
        scanf("%d", &num2);

        mult = num1 * num2;

        printf("Resultado = %d", mult);

    } else if (opcao == 3) {

        printf("Opcao selecionada: Divisao.\n");

        printf("Digite um numero: ");
        scanf("%d", &num1);

        printf("Digite outro numero: ");
        scanf("%d", &num2);

        if (num2 != 0) {
            divisao = (float) num1 / num2;
            printf("Resultado = %.2f", divisao);
        } else {
            printf("Erro! Divisao por zero.");
        }

    } else if (opcao == 4) {

        printf("Opcao selecionada: Subtracao.\n");

        printf("Digite um numero: ");
        scanf("%d", &num1);

        printf("Digite outro numero: ");
        scanf("%d", &num2);

        sub = num1 - num2;

        printf("Resultado = %d", sub);

    } else {

        printf("Opcao invalida!");

    }

    return 0;
}