#include <stdio.h>
typedef struct formulario{
	int matr;
	int idade;
	char nome[20];
}aluno;
int main(){
	aluno p;
	FILE*pf;
	pf= fopen("pessoa.txt","a+");
	do{
		printf("\nInforme a matricula: ");
		scanf("%d",&p.matr);
		if(p.matr!=999){
			printf("\nInforme a idade: ");
			scanf("%d",&p.idade);
			printf("\nInforme o nome: ");
			fflush(stdin);
			gets(p.nome);
			fwrite(&p,sizeof(p),1,pf);
		}
	}while(p.matr!=999);
	fclose(pf);
}
