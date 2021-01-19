#include <stdio.h>
int main() {
	float dist,hora,pre,comi,trans,show;
	printf("Informe distancia percorrida ate local do show:");
	scanf("%f",&dist);
	printf("Informe o preco por hora de show:");
	scanf("%f",&pre);
	printf("Informe quantas hora durou o show:");
	scanf("%f",&hora);
	trans=dist*2;
	comi=trans*0.35;
	show=(pre*hora)+trans;
	printf("\nA comissao de transporte recebeu: R$:%.2f",comi);
	printf("\nO valor toal cobrado pelo show foi: R$:%.2f",show);
	
		
}
