#include<stdio.h>
int main() {

    int contador, i, vet[10], vetImpar[10];

    for (i = 0; i < 10; i++)
      {
        printf("\n\t Digite o [%d] numero: ", i+1);
        scanf("%d", &vet[i]);

          if (vet[i] % 2 != 0) 
           {
              vetImpar[contador] = vet[i];
              contador++;
            }  
      }

     printf("\n\t OS NUMEROS IMPARES SAO :\n");
    for (i=0; i<contador;i++) 
      {
        printf("\t%d\n",vetImpar[i]);
      }
return 0;
}

