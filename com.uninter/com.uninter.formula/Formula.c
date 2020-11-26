#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    struct ponto2d
    {
        int x, y;
    };

    struct ponto2d ponto_inicial, ponto_final;
    int input;

    printf("[1]-Digitar os valores do primeiro ponto\n[2]-Digitar os valores do segundo ponto\n[3]-Mostrar a distancia entre os pontos\n[4]-Sair\nEntrada: ");
    scanf("%d", &input);

    while (input != 4)
    {
        if (input == 1)
        {
            printf("Digite o valor de ''X'' do ponto inicial: ");
            scanf("%d", &ponto_inicial.x);
            printf("Digite o valor de ''Y'' do ponto inicial: ");
            scanf("%d", &ponto_inicial.y);
        }
        else if (input == 2)
        {
            printf("Digite o valor de ''X'' do ponto final: ");
            scanf("%d", &ponto_final.x);
            printf("Digite o valor de ''Y'' do ponto final: ");
            scanf("%d", &ponto_final.y);
        }
        else if (input == 3)
        {
            int powerX = pow((ponto_inicial.x - ponto_final.x), 2),
                powerY = pow((ponto_inicial.y - ponto_final.y), 2);
            double distance = sqrt(powerX + powerY);
            printf("A distancia entre os pontos eh: %.2f\n", distance);
        }
        else
        {
            printf("Entrada invalida, digite novamente.\n");
        }        
        
        printf("\n[1]-Digitar os valores do primeiro ponto\n[2]-Digitar os valores do segundo ponto\n[3]-Mostrar a distancia entre os pontos\n[4]-Sair\nEntrada: ");
        scanf("%d", &input);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
