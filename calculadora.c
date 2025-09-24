#include <stdio.h>

int main() {
    char operador;
    double num1, num2;
    int continuar; 

    do {
        
        printf("Digite um operador (+, -, *, /): ");
        scanf(" %c", &operador);

        printf("Digite dois numeros separados por espaco: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operador) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
                break;

            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
                break;

            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
                break;

            case '/':
                if (num2 != 0.0) {
                    printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
                } else {
                    printf("Erro! Divisao por zero nao e permitida.\n");
                }
                break;

            default:
                printf("Erro! Operador invalido.\n");
        }

        printf("\nDeseja fazer outro calculo? (1 para Sim, 0 para Nao): ");
        scanf("%d", &continuar);
        printf("\n"); 

    } while (continuar == 1); 

    printf("Calculadora encerrada.\n");

}