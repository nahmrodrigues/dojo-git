#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_option() {
    int option;

    system("clear");
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
                multiplicacao();
            break;
            case 4:
                divisao();
            break;
            case 5:
                exponenciacao();
            break;
            case 6:
                raiz_quadrada();
            break;
            default:
                printf("\nOpcao Invalida!\n");
            break;
        }
    }

    return 0;
}