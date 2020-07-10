#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

int capacidadeReservatorio = 0;
int chuva [12], consumo [12], vazio [12], cheio [12];
int utilizacaoReservatorio [13];

printf("Reservatorio 1.0\n\n");
printf("Informe a capacidade do reservatorio (em ''mm''): "); 
scanf("%i", &capacidadeReservatorio); //Coletando capacidade máxima do reservatório
printf("\n");

for (int i = 0; i < (sizeof (chuva) /sizeof (chuva[0])); i++) //Coletando dados da chuva de cada mês
{
    printf("Informe a quantidade de chuva (em ''mm'') do %do mes: ", i + 1);
        scanf("%i", &chuva[i]);
}

printf("\n----------------/----------------/----------------\n\n");

for (int i = 0; i < (sizeof (consumo) /sizeof (consumo[0])); i++) //Coletando dados de consumo de cada mês
{
    printf("Informe o consumo (em ''mm'') do %do mes: ", i + 1);
        scanf("%i", &consumo[i]);
}

for (int i = 0; i < (sizeof (chuva) /sizeof (chuva[0])); i++) //Calculando e inferindo situação do reservatorio
{
    utilizacaoReservatorio[i + 1] = utilizacaoReservatorio[i] + (chuva[i] - consumo[i]); //Calculando uso

    if (utilizacaoReservatorio[i + 1] <= 0) //Caso reservatório vazio
    {
        cheio[i] = 0;
        vazio[i] = 1;
        utilizacaoReservatorio[i + 1] = 0;      

    }else if (utilizacaoReservatorio[i + 1] > 0 && utilizacaoReservatorio[i + 1] < capacidadeReservatorio) //Caso reservatório normal
    {
        cheio[i] = 0;
        vazio[i] = 0;

    }else if (utilizacaoReservatorio[i + 1] >= capacidadeReservatorio) //Caso reservatório cheio
    {        
        cheio[i] = 1;
        vazio[i] = 0;
        utilizacaoReservatorio[i + 1] = capacidadeReservatorio;
    }   

}

for (int i = 0; i < (sizeof (chuva) /sizeof (chuva[0])); i++) //Comunicando usuário
{
    printf("\n");
    printf("Quantidade de agua (em ''mm'') no reservatorio, no %do mes: %d", i + 1, utilizacaoReservatorio[i + 1]);

     if (vazio[i] == 1) //Caso reservatório vazio
     {
         printf(". VAZIO!!!");
     }     

     else if (cheio[i] == 1) //Caso reservatório cheio
     {
         printf(". CHEIO!!!");
     }
}
    printf("\n\n")
    system ("PAUSE");
    return 0;
}
