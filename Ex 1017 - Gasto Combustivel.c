#include <stdio.h>
#include <math.h>

int main()
{
    int horas,vel;
    float litros, km;

    scanf("%d %d",&horas,&vel);

    km = horas * vel;

    litros = km/12;


    printf("%.3f\n",litros);

    return 0;
}
