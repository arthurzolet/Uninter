#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("\n %c \n", 'a' + 20);

    printf("\n %d \n", 'c' - 'a');

    printf("\n %c \n", 600);
    

    int c[255] = {0};

    for (size_t i = 0; i < 255; i++)
    {
        printf("%d\n", c[i]);
    }
    

    printf("\n\nFIM!!!\n");
    system("PAUSE");
    return 0;
}
