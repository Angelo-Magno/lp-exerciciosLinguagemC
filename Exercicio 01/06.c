#include <stdio.h>
int main() {
	float inicial,final,qvales,total,totalp,totalv,fatu;
	printf("Informe o valor inicial da catraca:");
	scanf("%f",&inicial);
	printf("Informe o valor final da catraca:");
	scanf("%f",&final);
	printf("Informe a quantidade de vales recebidos:");
	scanf("%f",&qvales);
	totalp=final-inicial;
	totalv=qvales*0.75;
	total=(totalp-qvales)*1.50;
	fatu=total+totalv;
	printf("O faturamento do dia foi:%.2f",fatu);
}
