#include <stdio.h>

int main() {

    double pi = 3.14159;
    double raio;
    double VOLUME;

    scanf("%lf",&raio);

    VOLUME = (4/3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
