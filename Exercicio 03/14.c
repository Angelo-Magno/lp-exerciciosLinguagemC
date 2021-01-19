#include <stdio.h>
int main() {
	float media=0,soma1=0;
	int div=0,n=0,x=0,y=0,soma=0;

	while(n!=999) {
	printf("Digite um numero:");
	scanf("%d",&n);
	y++;
	if(n!=999) {
		soma=soma+n;
	}	
	div=n%2;
	if(div==0) {
		soma1=soma1+n;
		x++;
		media=soma1/x;
	}
	}
	
	printf("\nA quantidade de numeros digitados:%d",y);
	printf("\nA soma do valores digitados:%d",soma);
	printf("\nA media dos numeros pares digitados:%.1f",media);
	return(0);
}
