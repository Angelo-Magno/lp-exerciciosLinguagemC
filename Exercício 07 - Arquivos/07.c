#include <stdio.h>
int main() {
	char nome[20];
	float nota1,nota2,soma,media,mediag,total;
	int x;
	FILE*pf;
	pf=fopen("ex03.txt","a+");
	if(pf==NULL){
		printf("\nArquivo nao pode ser aberto");
	}
	fread(nome,sizeof(nome),1,pf);
	fread(&nota1,sizeof(nota1),1,pf);
	fread(&nota2,sizeof(nota2),1,pf);
	printf("\nNome do Aluno - nota1 - nota2 - media");
	while(!feof(pf)){
		soma=nota1+nota2;
		media=soma/2;
		total=total+media;
		printf("\n%s ** %.1f ** %.1f ** %.1f",nome,nota1,nota2,media);
		fread(nome,sizeof(nome),1,pf);
		fread(&nota1,sizeof(nota1),1,pf);
		fread(&nota2,sizeof(nota2),1,pf);
		
	}
		mediag=total/4;
		printf("\nMedia Geral: %.1f",mediag);
		return(0);
}
