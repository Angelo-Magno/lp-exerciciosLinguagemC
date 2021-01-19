#include <stdio.h>
int main() {
	char sexo;
	
	printf("Informe seu sexo:");
	scanf("%c",&sexo);
	
	if ((sexo=='f') || (sexo=='F')) {
		printf("F - Feminino");
	} 
	else if ((sexo=='m') ||(sexo=='M')) {
		printf("M - Masculino");
	}
	else {
	printf("Sexo invalido");
	}
return(0);
}
