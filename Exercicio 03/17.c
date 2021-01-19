#include <stdio.h>

int main() {
	
	int cont=0,cont1=0;
	float soma=0,media=0,altura=0,maior=0,menor=0;
	char sex;
		while(sex!='s') {
			fflush(stdin);
			printf("\nInforme o seu sexo:");
			scanf("%c",&sex);
			if (sex!='s') {
				printf("Informe sua altura:");
				scanf("%f",&altura);
			}
			if (maior<altura) {
				maior=altura;
			}

			if ((menor == 0) || (menor > altura)) {
				menor=altura;
			}
			
			if(sex=='f') {
				soma=soma+altura;
				cont++;
				media=soma/cont;
			}
			if(sex=='m') {
				cont1++;
			}
		
		} 
	printf("\nA maior altura:%.2f \nA menor altura:%.2f",maior,menor);
	printf("\nA media da altura das mulheres:%.2f",media);
	printf("\nA quantidade de pessoas do sexo masculino:%d",cont1);
return(0);
}

