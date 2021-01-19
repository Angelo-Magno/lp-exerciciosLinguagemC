#include <stdio.h>
int main() {
	
	float fem,masc,aus,total,perc,perc2;
	printf("Informe o numero de candidatos presentes do sexo masculino:");
	scanf("%f",&masc);
	printf("Informe o numero de candidatos presentes do sexo feminino:");
	scanf("%f",&fem);
	printf("Informe o numero de candidatos ausentes:");
	scanf("%f",&aus);
	total=(masc+fem+aus);
	perc=(masc/total)*100;
	perc2=(aus/(fem+masc))*100;
	printf("\nO Percentual de Homens em relao ao total de candidatos:%.2f",perc);
	printf("\nO Percentual de faltosos em rela%c%co ao total de candidatos:%.2f",135,198,perc2);
	return(0);
	
}
