#include <stdio.h>
int main() {
	float nota,i=0;
	printf("Informe a nota do aluno:");
	scanf("%f",&nota);
	while ((nota>=0)&&(nota<=10)&&(i==0)){
	i++;
	if ((nota>6.7) && (nota<7)) {
		nota=7;
	}
	if (nota>=7) {
		printf("Aluno aprovado");
	}
	else {
		printf("Aluno reprovado");
	}
}
	return(0);
}
