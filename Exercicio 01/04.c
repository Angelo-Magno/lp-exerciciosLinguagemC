#include <stdio.h>
int main() {
	float km,per,lt;
	printf("\tInforme a quantidade de quil%cmetros percorridos:",147);
	scanf("%f",&per);
	printf("\tInforme a quantidade de litros abastecidos:");
	scanf("%f",&lt);
	km=per/lt;
	printf("\n\tA quantidade de quil%cmetros percorridos por litro foi: %.2fkm",147,km);
	return(0);

}
