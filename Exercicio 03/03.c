	#include <stdio.h>
	int main() {
		int n=0;
		float soma=0,media=0,maior=0,menor=10,nota=0,div=0;
		while(n<1) {
			printf("\nInforme a quantidade de alunos:");
			scanf("%d",&n);
			if (n<1) {
				printf("Numero digitado incorreto. Digite novamente");
			}
		}
	div=n;
	    for(;n>0;n--) {
	        do {
			    printf("\nInforme a nota do aluno:");
		        scanf("%f",&nota);
			    	if((nota<0)||(nota>10)) {
				printf("ERROR! Digite novamente");
			}
			if(nota>maior) {
				maior=nota;
			}
			if((nota>=0)&&(nota<menor)){
				menor=nota;
			}
			if((nota>=0)&&(nota<=10)) {
				soma=soma+nota;
			}
			media=soma/div;
			   } while((nota<0)||(nota>10));
		} 
		printf("\nA media da turma:%.2f",media);
		printf("\nA maior nota da turma:%.2f",maior);
		printf("\nA menor nota da turma:%.2f",menor);
		return(0);
	}
