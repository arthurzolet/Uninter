#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tabuleiro[8][8];

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = 0;            
            printf(" %d", tabuleiro[i][j]);
        }                
        printf("\n");
    }

    printf("\n\nFIM!!!\n");
    system("PAUSE");
    return 0;
}
