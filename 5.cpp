#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

	int contador = 0, numero, vetor[100];
    printf("Digite os numeros: ");
	scanf("%d",&numero);

	while (numero != 999){

		if (contador == 0){
		vetor[contador] = numero;
		contador++;
		}	

			else{
			vetor[contador] = numero;
			contador++;
			}

	scanf("%d",&numero);		
	}

	if (numero == 999){
		contador--;
		}

	while ( contador >= 0 ){

		printf("%d\n",vetor[contador]);
		contador--;
	}
	return 0;
}
