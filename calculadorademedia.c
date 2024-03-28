#include <stdio.h>
int main () {

    int valores;
    float val1;
    float val2;
    float val3;
    float val4;
    float val5;
    float val6;
    float val7;
    float val8;
    float val9;
    double resultado;

    printf("Bem-vindo a calculadora de médias! Você pode inserir até 9 numeros e ter uma média precisa entre eles. \n");

    printf("\nDigite entre 2 e 9 o número de valores a serem inseridos: ");
    scanf("%d", &valores);

    if (valores <= 1) {

    printf("Errado, coloque pelo menos 2 valores");

    } else if (valores == 2) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);

    resultado = (val1 + val2) / 2;

    printf("O resultado é: %f", resultado);

    } else if (valores == 3) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);

    resultado = (val1 + val2 + val3) / 3;

    printf("O resultado é: %f", resultado);

    } else if (valores == 4) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);

    resultado = (val1 + val2 + val3 + val4) / 4;

    printf("O resultado é: %f", resultado);

    } else if (valores == 5) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);
    printf("Digite o quinto valor: ");
    scanf("%f", &val5);

    resultado = (val1 + val2 + val3 + val4 + val5) / 5;

    printf("O resultado é: %f", resultado);

    } else if (valores == 6) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);
    printf("Digite o quinto valor: ");
    scanf("%f", &val5);
    printf("Digite o sexto valor: ");
    scanf("%f", &val6);

    resultado = (val1 + val2 + val3 + val4 + val5 + val6) / 6;

    printf("O resultado é: %f", resultado);

    } else if (valores == 7) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);
    printf("Digite o quinto valor: ");
    scanf("%f", &val5);
    printf("Digite o sexto valor: ");
    scanf("%f", &val6);
    printf("Digite o setimo valor: ");
    scanf("%f", &val7);

    resultado = (val1 + val2 + val3 + val4 + val5 + val6 + val7) / 7;

    printf("O resultado é: %f", resultado);

    } else if (valores == 8) {

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);
    printf("Digite o quinto valor: ");
    scanf("%f", &val5);
    printf("Digite o sexto valor: ");
    scanf("%f", &val6);
    printf("Digite o setimo valor: ");
    scanf("%f", &val7);
    printf("Digite o oitavo valor: ");
    scanf("%f", &val8);

    resultado = (val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8) / 8;

    printf("O resultado é: %f", resultado);

    } else if (valores == 9) {

     printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);
    printf("Digite o quarto valor: ");
    scanf("%f", &val4);
    printf("Digite o quinto valor: ");
    scanf("%f", &val5);
    printf("Digite o sexto valor: ");
    scanf("%f", &val6);
    printf("Digite o setimo valor: ");
    scanf("%f", &val7);
    printf("Digite o oitavo valor: ");
    scanf("%f", &val8);
    printf("Digite o nono valor: ");
    scanf("%f", &val9);

    resultado = (val1 + val2 + val3 + val4 + val5 + val6 + val7 + val8 + val9) / 9;

    printf("O resultado é: %f", resultado);

    } else if (valores >= 10) {

    printf("Errado, só aceitamos até 9 valores.");

    }

    return 0;

}
