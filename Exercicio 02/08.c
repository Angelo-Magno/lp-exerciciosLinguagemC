#include <stdio.h>
int main() {
	int n=0,cent=0,dez=0,uni=0,resto=0;
	do { 
		printf("\nDigite um numero inteiro menor que 1000:");
		scanf("%d",&n);
		cent=n/100;
		resto=n%100;
		dez=resto/10;
		uni=n%10;
		if(n>1000) {
			printf("Valor invalido! Digite novamente");
		}
	} while(n>1000);
	printf("\nCentena:%d \nDezena:%d \nUnidade:%d",cent,dez,uni);
	return(0);
}
