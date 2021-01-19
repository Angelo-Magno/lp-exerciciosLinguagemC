#include <stdio.h>
int main() {
	int n=0,n1=0,maior=0,menor=99,cont=0,soma=0;
	float media=0;
	do{
		printf("\nInforme a quantidade de alunos:");
		scanf("%d",&n);
		cont=n;
		if(n<1) {
			printf("Quantidade incorreta! Digite novamente.\n");
		}
    } while(n<1);
	
	for(;n>0;n--) {

		printf("\nInforme a nota do aluno:");
		scanf("%d",&n1);	
		if((n1<0)||(n1>10)) {
			printf("Numero incorreto! Digite novamete.\n");
			n++;
		}
	
    	if(n1>maior){
    		maior=n1;
		}
    	if(n1<menor){
    		menor=n1;
		}
	
		soma=soma+n1;
    	media= soma/cont;
	}
	printf("O maior %c:%d \n" ,130,maior);
	printf("O menor %c:%d \n" ,130,menor);
	printf("A media %c:%.2f \n",130,media);
}
