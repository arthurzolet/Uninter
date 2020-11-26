#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float L, float *area, float *perimetro)
{
    float power = pow(L, 2);
    *area = (3 * power * sqrt(3)) / 2;
    *perimetro = 6 * L;
}

int main(int argc, char const *argv[])
{
    float lado, area, perimetro;
    printf("Insira o valor de ''L'' do hexagono: ");
    scanf("%f", &lado);

    while (lado > 0)
    {
        calc_hexa(lado, &area, &perimetro);
        printf("A area do hexagono eh: %.2f, e seu perimetro eh: %.2f\n", area, perimetro);
        area = 0, perimetro = 0;
        printf("\nInsira o valor de ''L'' do hexagono: ");
        scanf("%f", &lado);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
