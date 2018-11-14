#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");
    int caralho;

      printf("Qual o tamanho da tua pila(Não sejas mentiroso):  ");
      scanf(" %d",&caralho);

      if (caralho>15 && caralho<50)
      {
            printf("\n Pénis grande");
      }

      else if (caralho<15 && caralho>=10)
      {
          printf("\n Pénis mais ou menos pequeno");
      }

      else if (caralho<10 && caralho>0)
      {
          printf("\n Pénis MUITO pequeno, devias ter vergonha ou por o teu pai em tribunal");
      }

      else if (caralho>50)
      {
          printf("\n Ou és do Senegal ou és mentiroso");
      }
      else if (caralho<0)
       {
         printf("\n Isso não é um pénis, é uma vagina");
       }

      else
        printf("\n Penis inválido, ou genderqueer");



    return 0;
}
