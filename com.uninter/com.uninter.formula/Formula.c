#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_hexa(float L)
{
    float area = 0;
    area = (3 * (L * L) * sqrt(3)) / 2;
    return area;
}

int main(int argc, char const *argv[])
{
    float side = 0;
    printf("Insira o valor de ''L'' do hexagono: ");
    scanf("%f", &side);

    while (side > 0)
    {
        printf("A area do hexagono eh: %f\n", calc_hexa(side));
        printf("\nInsira o valor de ''L'' do hexagono: ");
        scanf("%f", &side);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
