#include <stdio.h>
#include //"\Biblioteca de Funções\minhas funções.h"
int main(){
	float n,n1;
	printf("informe n: ");
	scanf("%f",&n);
	printf("informe n1: ");
	scanf("%f",&n1);
	printf("\nSoma dos numeros: %.0f",fsoma(n,n1));
	printf("\nMedia dos numeros: %.1f",fmedia(n,n1));
	printf("\nO quadrado do primeiro numero: %.0f",fquadrado(n));
	printf("\nA raiz quadrada da soma dos quadrados: %.1f",fraizsomaquadrados(n,n1));
}
