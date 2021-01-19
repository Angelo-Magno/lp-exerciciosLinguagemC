#include <stdio.h>
int main() {
	float preco=0,qunid=0,total=0,desc=0,li=0;

	do {
		printf("\nDigite o preço da unidade do tablet:");
		scanf("%f",&preco);
		if(preco<0) {
			printf("\tErro. Digite um valor valido.\n");
		}
	} while (preco<0);
	
	printf("Digite a quantidade de unidades vendidas:");
	scanf("%f",&qunid);
	total=qunid*preco;
	desc=qunid*300;
	li=total-desc;
	if (li>0) {
		printf("O lucro foi:%.2f",li);
	}
	else if (li==0) {
		printf("nao houve lucro:%.2f",li);
	}
	else {
		printf("defict de:%.2f",li);
	}
	return(0);
}
