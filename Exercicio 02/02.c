#include <stdio.h>
int main() {
	float n1;
	printf("Informe um numero:");
	scanf("%f",&n1);
	if (n1<0) {
		printf(" O numero informado %c negativo",130);
	}
	else {
	printf(" O numero informado %c positivo",130);
	}
	return(0);
}
