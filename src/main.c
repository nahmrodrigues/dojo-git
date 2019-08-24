#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void subtracao()
{
  int num1, num2, num3;
  num1 = 7;
  num2 = 3;
  num3 = num1 - num2;

printf("%d", num3);
}

void divisao() {
    float n1, n2;

    printf("\nDigite os numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("\nResultado: %.2f\n", n1/n2);
}

int get_option() {
    int option;

    printf("\n********************* CALCULADORA *********************\n");
    printf("0 - Sair\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Exponenciacao\n");
    printf("6 - Raiz Quadrada\n");
    
    printf("\nDigite a sua opcao: ");
    scanf("%d", &option);

    return option;
}

int soma(){
    int a, b;
    int soma;

    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("%d", soma);

    return 0;
}

int main() {
    int option;

    while(1) {
        option = get_option();

        switch(option) {
            case 0:
                exit(0);
            break;
            case 1:
                 soma();
            break;
            case 2:
                subtracao();
            break;
            case 3:
                // multiplicacao();
            break;
            case 4:
               // divisao();
            break;
            case 5:
                // exponenciacao();
            break;
            case 6:
                // raiz_quadrada();
            break;
            default:
                printf("\nOpcao Invalida!\n");
            break;
        }
    }

    return 0;
}


  
