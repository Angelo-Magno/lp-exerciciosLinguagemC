#include <stdio.h>
int main() {
	int n=0,y=0,div=0,soma=0;

	printf("Digite um numero:");
	scanf("%d",&n);
	for(y=0;y<n;y++) {
		div=y%2;
		if(div==0) {
			soma=soma+y;
		}
	}
	printf("\nA soma dos numeros pares:%d",soma);
	return(0);
}
