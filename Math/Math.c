#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    double z1, z2;

    printf("Введіть alpha: ");
    scanf("%lf", &a);
    printf("Введіть beta: ");
    scanf("%lf", &b);

    double dz1 = cos(a) - sin(2.0 * b - a);
    double dz2 = cos(2.0 * b);

    z1 = (sin(a) + cos(2.0 * b - a)) / dz1;
    printf("z1 = %.6lf\n", z1);
    
    z2 = (1.0 + sin(2.0 * b)) / dz2;
        printf("z2 = %.6lf\n", z2);

    return 0;
}
