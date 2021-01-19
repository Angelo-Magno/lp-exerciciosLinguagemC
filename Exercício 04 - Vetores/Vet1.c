#include <stdio.h>
int main() {
	int a[6],cont=1,p=0,menor=0;
	for(cont=1;cont<=5;cont++) {
		printf("Digite um numero:");
		scanf("%d",&a[cont]);
		if((menor>a[cont])||(menor==0)) {
			menor=a[cont];
			p=cont;
		}
	}
	printf("A posicao:%d \nO menor:%d",p,menor);
	return(0);
}
