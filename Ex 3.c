#include <stdio.h>

int main() {

    int n1, n2, opcao;

    printf("Insira o valor de N1: ");
    scanf("%i",&n1);
    printf("insira o valor de N2: ");
    scanf("%i",&n2);

    printf("\n|------------------------------------------\n|Escolha uma das opcoes abaixo:           |\n|1 - Quadrado de N1 e N2                  |\n|2 - Mostra se n1 e' impar ou par         |\n|3 - Qual o maior valor entre n1 e n2     |\n|------------------------------------------\n\nOpcao = ");
    scanf("%i",&opcao);

    switch(opcao){

    case 1:
    n1 = n1*n1;
    n2 = n2*n2;
    printf("\nO quadrado de n1 = %i\nO quadrado de n2 = %i\n",n1,n2);
    break;

    case 2:

    if(n1%2==0){
    printf("O numero e' par\n");
    }else{
    printf("O numero e' impar\n");
    }
    break;

    case 3:
    if(n1>n2){
    printf(" N1 e' maior que N2\n");
    }else{
    if(n2>n1){
    printf(" N2 e' maior que N1\n");
    }else{
    if(n1 = n2){
    printf("N1 e N2 possuem o mesmo valor\n");
    }}}
    break;
    }
    return 0;
}

