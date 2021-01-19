#include <stdio.h>
int main() {
	float peso=0,peso1=0;
	int tempo=0;
	printf("Informe o peso em grama:");
	scanf("%f",&peso);
	peso1=peso;
	while (peso>0.5) {
		tempo=tempo+50;
		peso=peso/2;
	}
	printf("\nO tempo final: %d segundos\nMassa inicial: %.2f \nMassa final: %.2f",tempo,peso1,peso);
	return(0);
}
