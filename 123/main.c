#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");
    int caralho;

      printf("Qual o tamanho da tua pila(N�o sejas mentiroso):  ");
      scanf(" %d",&caralho);

      if (caralho>15 && caralho<50)
      {
            printf("\n P�nis grande");
      }

      else if (caralho<15 && caralho>=10)
      {
          printf("\n P�nis mais ou menos pequeno");
      }

      else if (caralho<10 && caralho>0)
      {
          printf("\n P�nis MUITO pequeno, devias ter vergonha ou por o teu pai em tribunal");
      }

      else if (caralho>50)
      {
          printf("\n Ou �s do Senegal ou �s mentiroso");
      }
      else if (caralho<0)
       {
         printf("\n Isso n�o � um p�nis, � uma vagina");
       }

      else
        printf("\n Penis inv�lido, ou genderqueer");



    return 0;
}
