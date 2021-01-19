#include <stdio.h>
int main() {
	float sal,qui,cent,resi,desc,novo;
	printf("Informe o valor do sal%crio minimo:",160);
	scanf("%f",&sal);
	printf("Informe a quantidade de quilowatt gasta pela resid%cncia:",136);
	scanf("%f",&qui);
	cent=sal/100;
	resi=qui*cent;
	desc=resi*0.15;
	novo=resi-desc;
	printf("\nO custo por quilowatt %c: R$:%.2f",130,cent);
	printf("\nO valor a pagar pela resid%cncia %c: R$:%.2f",136,130,resi);
	printf("\nO valor a pagar com desconto de %c: R$:%.2f",130,novo);
}
