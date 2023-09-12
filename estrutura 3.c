#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    int calorias_prato, calorias_sobremesa, calorias_bebida;
    int total_calorias;

    // Solicita ao usuario suas refeições 
    printf("Escolha o prato (1 - Vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne): ");
    scanf("%d", &prato);

    printf("Escolha a sobremesa (1 - Abacaxi, 2 - Sorvete diet, 3 - Mouse Diet, 4 - Mouse Chocolate): ");
    scanf("%d", &sobremesa);

    printf("Escolha a bebida (1 - Cha, 2 - Suco de Laranja, 3 - Suco de melao, 4 - Refrigerante diet): ");
    scanf("%d", &bebida);

    // Atribui as calorias baseado no que o usuario escolheu 
    switch (prato) {
        case 1:
            calorias_prato = 180;
            break;
        case 2:
            calorias_prato = 230;
            break;
        case 3:
            calorias_prato = 250;
            break;
        case 4:
            calorias_prato = 350;
            break;
        default:
            calorias_prato = 0;
            break;
    }

    switch (sobremesa) {
        case 1:
            calorias_sobremesa = 75;
            break;
        case 2:
            calorias_sobremesa = 110;
            break;
        case 3:
            calorias_sobremesa = 170;
            break;
        case 4:
            calorias_sobremesa = 200;
            break;
        default:
            calorias_sobremesa = 0;
            break;
    }

    switch (bebida) {
        case 1:
            calorias_bebida = 20;
            break;
        case 2:
            calorias_bebida = 70;
            break;
        case 3:
            calorias_bebida = 100;
            break;
        case 4:
            calorias_bebida = 65;
            break;
        default:
            calorias_bebida = 0;
            break;
    }

    // Calcula o total de calorias
    total_calorias = calorias_prato + calorias_sobremesa + calorias_bebida;

    // Exibe o total de calorias da refeição
    printf("O total de calorias da refeicão é: %d calorias\n", total_calorias);

    return 0;
}
