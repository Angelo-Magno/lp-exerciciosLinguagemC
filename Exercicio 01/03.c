#include <stdio.h>
int main() {
	int atraso;
	float const multa=1.20;
	float valorp;
	printf("Informe os dias em atraso:");
	scanf("%d",&atraso);
	valorp=atraso*multa;
	printf("Total a pagar de multa:%f",valorp);
	return(0);

}
