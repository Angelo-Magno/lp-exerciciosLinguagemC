#include <stdio.h>
int main() {
	float n,n1,n2,n3,n4,media,soma;
	
	printf("Digite um numero:");
	scanf("%f",&n);
	printf("Digite um numero:");
	scanf("%f",&n1);
	printf("Digite um numero:");
	scanf("%f",&n2);
	printf("Digite um numero:");
	scanf("%f",&n3);
	printf("Digite um numero:");
	scanf("%f",&n4);
	soma=n+n1+n2+n3+n4;
	media=soma/5;
	printf("\nA soma:%.1f \nA media:%.1f",soma,media);
	return(0);
}
