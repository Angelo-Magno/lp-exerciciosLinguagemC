#include <stdio.h>
int main() {
	
	int led[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, qtd, n, x, v, aux;
	
	printf("Informe a quantidade de vezes para testar: ");	
	scanf("%d", &n);
	while ((n < 1) || (n > 10)) {
		printf("Numero inválido. Informe um valor entre 1 e 10: ");
		scanf("%d", &n);
	}
	
	for (x=0; x<n; x++) {
		printf("Informe o Numero: ");
		scanf("%d", &v);
		aux = v;
		qtd = 0;
		while (aux > 0) {
			qtd += led[aux % 10];
			aux /= 10;
		}
		printf("%d leds\n", qtd);
	}
return (0);
} 
