#include <stdio.h>
int main() {
	int n=0,cent=0,dez=0,uni=0,resto=0,soma=0;
	
	while((n<100)||(n>999)) {
		printf("\nDigite um numero:");
		scanf("%d",&n);
		if ((n<100)||(n>999)){
			printf("Valor invalido!");
		}
		cent=n/100;
		resto=n%100;
		dez=resto/10;
		uni=resto%10;
		soma=cent+dez+uni;
		
	}
	printf("A soma dos algarismos: %d",soma);
	return(0);
}
