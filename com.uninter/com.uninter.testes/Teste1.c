#include <stdio.h>
#include <stdlib.h>

//teste github
//teste github

int main(int argc, char const *argv[])
{

    int chuva[] = {0, 838, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0};
    int consumo[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    //printf("%lf\n", chuva[i]);

    for (int i = 0; i < (sizeof(chuva) / sizeof(chuva[0])); i++)
    {
        printf("%d\n", chuva[i]);
    }

    int a = 8;
    printf("\n\n%d\n\n", a);

    printf("\nFIM!!!\n");
    system("PAUSE");
    return 0;
}
