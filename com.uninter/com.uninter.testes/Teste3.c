#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int m = 0, n = 0;
    char string[m][n];

    do
    {
        printf("Digite o valor do eixo ''m'' (entre ''1'' e ''10''): ");
        scanf("%d", &m);
    } while (m < 1 || m > 10);

    printf("\n");

    do
    {
        printf("Digite o valor do eixo ''n'' (entre ''1'' e ''10''): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d %d    Digite a %da letra da %da palavra: ", i, j, (j + 1), (i + 1));
            scanf("%s", &string[i][j]);
            /*
            for (int k = 0; k < m; k++)
            {
                printf("\n");
                for (int l = 0; l < n; l++)
                {
                    printf("%c", string[k][l]);
                }
            }
            */
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%c", string[i][j]);
        }
    }

    printf("\n%c\n", string[0][2]);

    printf("\nFIM!!!\n");
    system("PAUSE");
    return 0;
}
