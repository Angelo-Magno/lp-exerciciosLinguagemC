#include <stdio.h>
typedef struct aluno{
	char nome[30];
	float nota[3];
}aluno;

int main() {
	aluno p;
	int x,k,y,aux;
	float soma,vmedia[3];
	char vnome[3][30],auxnome[30];
	
	for(x=0;x<4;x++){
		printf("\nInforma o nome do aluno:");
		fflush(stdin);
		gets(p.nome);
		soma=0;
		for(k=0;k<3;k++){
			printf("\nInforme a nota: ");
			scanf("%f",&p.nota[k]);
			soma=soma+p.nota[k];
		}
		strcpy(vnome[x],p.nome);
		vmedia[x]=soma/3;
	}
	for(x=0;x<4;x++){
		for(y=x+1;y<4;y++){
			if(vmedia[x]<vmedia[y]){
				aux=vmedia[x]; strcpy(auxnome,vnome[x]);
				vmedia[x]=vmedia[y]; strcpy(vnome[x],vnome[y]);
				vmedia[y]=aux; strcpy(vnome[y],auxnome);
			}
		}
	}
			
	for(x=0;x<4;x++)
	printf("\nNome: %s ------ Media: %.1f",vnome[x],vmedia[x]);
}
