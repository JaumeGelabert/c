#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    printf("\n");

    double x = 9.5;
    double y = 10.01;
    int z = -100;

    double a = sqrt(x);
    printf("Raiz cuadrada de %.2lf es %lf\n", x, a);
    printf("\n");

    double b = pow(x, 2);
    printf("El cuadrado de %.2lf es %lf\n", x, b);
    printf("\n");

    double c = round(x);
    double d = round(y);
    printf("Si redondeamos %.2lf es %.2lf\n", x, c);
    printf("Si redondeamos %.2lf es %.2lf\n", y, d);
    printf("\n");

    double e = ceil(x);
    double f = ceil(y);
    printf("Si aplicamos 'ceil' a %lf obtenemos %lf\n", x, e);
    printf("Si aplicamos 'ceil' a %lf obtenemos %lf\n", y, f);
    printf("\n");

    double g = floor(x);
    double h = floor(y);
    printf("Si aplicamos 'floor' a %lf obtenemos %lf\n", x, g);
    printf("Si aplicamos 'floor' a %lf obtenemos %lf\n", y, h);
    printf("\n");

    int k = abs(z);
    printf("El valor absoluto de %d es %d\n", z, k);

    double l = log(x);
    printf("El logaritmo de %lf es %.2lf\n", x, l);

    double m = sin(x);
    printf("El seno de %lf es %.2lf\n", x, m);

    double n = cos(x);
    printf("El coseno de %lf es %.2lf\n", x, n);

    double o = tan(x);
    printf("La tangente de %lf es %.2lf\n", x, o);

    return 0;
}