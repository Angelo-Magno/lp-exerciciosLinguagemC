#include <stdio.h>
int main( ) {
	int n1,n2,maior;
	printf("Informe o primero numero:");
	scanf("%d",&n1);
	printf("Informe o segundo numero:");
	scanf("%d",&n2);
	maior=n1;
	if (n2>maior) {
		maior=n2;
	}
	printf("O MAIOR NUMERO FOI:%d",maior);
}
