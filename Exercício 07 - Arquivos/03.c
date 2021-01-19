#include <stdio.h>
int main(){
	float media,soma,nota;
	int idade,x=0;
	char nome[20];
	FILE*pf;
	pf = fopen("ex01.txt","a+");
	if(pf==NULL) {
		printf("ERROR! Arquivo nao pode se aberto");
	}
	fread(nome,sizeof(nome),1,pf);
	fread(&idade,sizeof(idade),1,pf);
	fread(&nota,sizeof(nota),1,pf);
	while(!feof(pf)){
		printf("\n\nNome:%s \nIdade: %d \nNota: %.1f",nome,idade,nota);
		fread(nome,sizeof(nome),1,pf);
		fread(&idade,sizeof(idade),1,pf);
		fread(&nota,sizeof(nota),1,pf);
		soma=soma+nota;
		x++;
	}
	
	media=soma/x;
	printf("\nA media da notas: %.1f",media);
fclose(pf);
}
