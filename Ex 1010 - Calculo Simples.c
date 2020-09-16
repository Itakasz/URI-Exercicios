#include <stdio.h>

int main() {

int p1, np1, p2, np2;
float vp1, vp2;

scanf("%d",&p1);
scanf("%d",&np1);
scanf("%f",&vp1);

scanf("%d",&p2);
scanf("%d",&np2);
scanf("%f",&vp2);

printf("VALOR A PAGAR: R$ %.2f\n",(np1*vp1)+(np2*vp2));


return 0;

}
