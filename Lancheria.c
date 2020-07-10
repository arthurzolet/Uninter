#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int item = 0; //Entrada de dados
    int item1 = 0, item2 = 0, item3 = 0, item4 = 0, item5 = 0, item6 = 0, item7 = 0; //Variáveis de itens
    double valorTotal = 0; //Valor total
    
    printf("Lancheria do Ze");
    printf("\n\n");
    printf("Item    Produto             Codigo      Preco Unitario\n");
    printf("1       Cachorro-quente     100         5,00\n");
    printf("2       X-Salada            101         8,79\n");
    printf("3       X-Bacon             102         9,99\n");
    printf("4       Misto               103         6,89\n");
    printf("5       Salada              104         4,80\n");
    printf("6       Agua                105         3,49\n");
    printf("7       Refrigerante        106         4,99\n");
    printf("\n");
    printf("Digite o numero do Item desejado (para sair, digite um numero != (1...7) ):");
    scanf("%i", &item);

    while (item >= 1 && item <= 7) //Recebendo pedido de itens
    {
        if (item == 1)
        {
            ++item1;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }else if (item == 2)
        {
            ++item2;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        } else if (item == 3)
        {
            ++item3;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }else if (item == 4)
        {
            ++item4;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }else if (item == 5)
        {
            ++item5;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }else if (item == 6)
        {
            ++item6;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }else if (item == 7)
        {
            ++item7;            
            printf("Digite o proximo item: ");
            scanf("%i", &item);
        }
    }
    printf("\n");    

        //Imprimindo "comanda" e calculando valor total
        if (item1 != 0)
        {
            printf("Cachorro-quente     -> 5,00 -> %d unidade(s)\n", item1);
            valorTotal += (5.00 * item1);
        }if (item2 != 0)
        {
            printf("X-Salada            -> 8,79 -> %d unidade(s)\n", item2);
            valorTotal += (8.79 * item2);
        }if (item3 != 0)
        {
            printf("X-Bacon             -> 9,99 -> %d unidade(s)\n", item3);
            valorTotal += (9.99 * item3);
        }if (item4 != 0)
        {
            printf("Misto               -> 6,89 -> %d unidade(s)\n", item4);
            valorTotal += (6.89 * item4);
        }if (item5 != 0)
        {
            printf("Salada              -> 4,80 -> %d unidade(s)\n", item5);
            valorTotal += (4.00 * item5);
        }if (item6 != 0)
        {
            printf("Agua                -> 3,49 -> %d unidade(s)\n", item6);
            valorTotal += (3.49 * item6);
        }if (item7 != 0)
        {
            printf("Refrigerante        -> 4,99 -> %d unidade(s)\n", item7);
            valorTotal += (4.99 * item7);
        }

    printf("Valor total: R$ %.2f\n", valorTotal); //Imprimindo valor total
    printf("\nVolte sempre!!!\n");    
    system ("PAUSE");
    return 0;
}
