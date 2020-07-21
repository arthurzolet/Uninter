#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int m = 0, n = 0; //Declaração eixos

    { //Coleta de ''m''
        do
        {
            printf("Digite o valor do eixo ''m'' (entre ''1'' e ''10''): ");
            scanf("%d", &m);
        } while (m < 1 || m > 10);
        printf("\n");
    }

    { //Coleta de ''n''
        do
        {
            printf("Digite o valor do eixo ''n'' (entre ''1'' e ''10''): ");
            scanf("%d", &n);
        } while (n < 1 || n > 10);
        printf("\n");
    }

    char string[n][m]; //Declaração da matriz
    int count[255] = {0}, ascii;

    { //Coleta de caracteres e contagem de ocorrências
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d %d    Digite a %da letra da %da palavra: ", j, i, (j + 1), (i + 1));
                scanf("%s", &string[i][j]);

                ascii = string[i][j];
                count[ascii]++;
            }
        }
        printf("\n    ");
    }

    { //Imprimindo numeração superior
        for (int i = 0; i < m; i++)
        {
            printf("%d ", (i));
        }
    }

    { //Imprimindo array
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            printf(" %d  ", i);
            for (int j = 0; j < m; j++)
            {
                printf("%c ", string[i][j]);
            }
        }
        printf("\n\n");
    }

    { //Imprimindo quantidade de ocorrências
        for (int i = 0; i < 255; i++)
        {
            if (count[i] != 0)
            {
                printf("%c  teve %d ocorrecias.\n", i, count[i]);
            }
        }
    }

    { //Cálculo
        double x = string[0][0];

        if (x >= 65 && x <= 90)
            printf("\nFuncao calculo: %.2lf", (x / 10));
        else
            printf("\nFuncao calculo: %.2lf", (x * 2));
    }

    printf("\n\nFIM!!!\n");
    system("PAUSE");
    return 0;
}
