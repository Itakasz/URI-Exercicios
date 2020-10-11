#include <stdio.h>

int main() {

    float n1, n2, n3, premio;

    printf("Insira o valor do premio: ");
    scanf("%f",&premio);

    n2 = 2*premio/6.5;
    n1 = n2*2;
    n3 = n2/4;

    printf("O primeiro ganhou %.2f\nO segundo ganhou %.2f\n O terceiro ganhou %.2f\n",n1,n2,n3);
    return 0;
}

