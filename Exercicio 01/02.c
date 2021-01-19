#include <stdio.h>
int main() {
	float sal_liquido,sal_base,vantagens,descontos;
	printf("\tInforme o sal%crio base:",160);
	scanf("%f",&sal_base);
	printf("\tInforme as vantagens:");
	scanf("%f",&vantagens);
	printf("\tInforme os descontos:");
	scanf("%f",&descontos);
	sal_liquido=sal_base+vantagens-descontos;
	printf("\n\tO sal%crio l%cquido foi: %f",160,161,sal_liquido);
	return(0);
	
	
}
