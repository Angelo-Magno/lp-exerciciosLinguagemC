#include <stdio.h>
int main() {
	int n,v100,v50,v20,v10,v5,v2,v1;
	printf("Digite o valor que deseja sacar:");
	scanf("%d",&n);
	v100=n/100;
	n=n%100;
	v50=n/50;
	n=n%50;
	v20=n/20;
	n=n%20;
	v10=n/10;
	n=n%10;
	v5=n/5;
	n=n%5;
	v2=n/2;
	n=n%2;
	v1=n/1;
	
	printf("\nNota de 100: %d",v100);
	printf("\nNota de 50: %d",v50);
	printf("\nNota de 20: %d",v20);
	printf("\nNota de 10: %d",v10);
	printf("\nNota de 5: %d",v5);
	printf("\nNota de 2: %d",v2);
	printf("\nNota de 1: %d",v1);
}
