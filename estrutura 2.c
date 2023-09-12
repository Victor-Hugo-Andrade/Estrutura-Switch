#include <stdio.h>

int main() {
    int codigo;
    float valor, total;
    int quantidade;

    printf("Digite o codigo do item pedido: ");
     scanf("%d", &codigo);

    printf("Digite a quantidade: ");
     scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            valor = 10.10;
            break;
        case 101:
            valor = 8.30;
            break;
        case 102:
            valor = 8.50;
            break;
        case 103:
            valor = 12.50;
            break;
        case 104:
            valor = 13.25;
            break;
        default:
            printf("Nao existe item com esse codigo.\n");
            return 1; // Mensagem caso coloque um codigo que nao exista 
    }

    total = valor * quantidade;

    printf("Valor a ser pago: R$%.2f\n", total);

    return 0;
}
