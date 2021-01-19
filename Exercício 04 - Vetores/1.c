#include <stdio.h>
int main() {
	int qnumeros,contador=0;
	float soma=0.0,media=0.0;
	printf("qunatidade de numeros:");
	scanf("%d",&qnumeros);
	
	float numeros[qnumeros];
	for(contador=0;contador<qnumeros;contador++){
	
	printf("digite o %d numero:",contador+1);
	scanf("%f",&numeros[contador]);
}

for(contador=0;contador<qnumeros;contador++){
	soma=soma+numeros[contador];
	media=soma/qnumeros;


}
	printf("\nmedia calcula foi:%f",media);
	return(0);
}
