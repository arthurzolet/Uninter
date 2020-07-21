#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

/*
float foo[] = {1, 2, 3, 10};
int i;
for (i=0;i < (sizeof (foo) /sizeof (foo[0]));i++) {
    printf("%lf\n",foo[i]);
}
*/

int matriz [] = {12, 8, 0};

printf("%d", (sizeof (matriz) /sizeof (matriz[0])));


for (size_t i = 0; i < sizeof matriz; i++) 
    {
        printf("%lf\n", matriz[i]);
    }
    
    
    printf("\nFIM!!!\n");
    system ("PAUSE");
    return 0;
}
