#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char string[20];
    printf("Informe o nome: ");
    scanf("%[^\n]%*c", &string);

    double salario = 0;
    printf("Informe o salario: ");
    scanf("%lf", &salario);
    double salarioCopy = salario;

    if (salario > 4087.65)
    {
        salario = salario * 0.725;
    }
    else if (salario >= 3271.39)
    {
        salario = salario * 0.775;
    }
    else if (salario >= 2453.51)
    {
        salario = salario * 0.85;
    }
    else if (salario >= 1637.12)
    {
        salario = salario * 0.925;
    }

    printf("\n%s ganha um salario de R$ %.2f, que apos abatido o IR, fica R$ %.2f\n", string, salarioCopy, salario);
    system("PAUSE");
    return 0;
}
