#include <stdio.h>
int main() {
	int y=0,n=0,soma=0;
	printf("Digite um numero:");
	scanf("%d",&n);
	for(y=0;y<=n;y++) {
		soma=soma+y;
	}
	printf("A soma entre 1  e o numero inteiro digitado inclusive = %d",soma);
}
