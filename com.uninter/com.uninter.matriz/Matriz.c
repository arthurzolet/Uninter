#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

int a [6] = {1, 2, 3, 4};

for (size_t i = 0; i < (sizeof a / sizeof a[0]); i++)
{
    printf("%d\n", a[i]);
}



printf("\nFIM!!!\n");
system ("PAUSE");
return 0;

}
