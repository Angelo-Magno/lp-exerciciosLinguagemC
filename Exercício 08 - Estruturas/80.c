#include <stdio.h>
typedef struct boletin_aluno{
	char nome[30];
	float nota;
}aluno;

int main(){
	aluno p;
	int x;
	float soma,media;
	char maior,nomemaior[30];
	
	for (x=0;x<3;x++){
		printf("\nInforma o nome do aluno:");
		fflush(stdin);
		gets(p.nome);
		printf("\nInforme a nota: ");
		scanf("%f",&p.nota);
		soma=soma+p.nota;
		if (maior<p.nota){
			maior=p.nota;
			strcpy(nomemaior,p.nome);
		}
		
	}
	media=soma/3;
	printf("\nA media da notas: %.1f \nAluno com maior nota: %s",media,nomemaior);
	return(0);
}
