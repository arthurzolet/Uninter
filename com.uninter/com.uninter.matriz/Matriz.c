#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

int m = 0, n = 0;
char string[m] [n];

do
{
    printf("Digite o valor do eixo ''m'' (entre ''1'' e ''10''): ");
    scanf("%d", &m);
}
while (m < 1 || m > 10);

printf("\n");

do
{
    printf("Digite o valor do eixo ''n'' (entre ''1'' e ''10''): ");
    scanf("%d", &n);
}
while (n < 1 || n > 10);

printf("\n");

for (size_t i = 0; i < m; i++)
{
    printf("Digite a %da palavra: ", (i + 1) );
    scanf("%s", &string[i]);
    //printf("\n");
}

for (size_t i = 0; i < m; i++)
{
    printf("\n%s", string[i] );
}


/*
printf("Digite: ");
//scanf("%s", &string);
gets(string);
printf("%s\n", string);

string[3];

printf("%s\n", string);
*/

printf("\nFIM!!!\n");
system ("PAUSE");
return 0;

}
