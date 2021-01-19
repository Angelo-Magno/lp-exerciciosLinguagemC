#include <stdio.h>
int main(){
	char nome[20];
	float nota;
	int idade,x;
	//Gravar arquivos
	FILE*pf;
	pf = fopen("ex01.txt","a+");
	if(pf==NULL){
		printf("\nERROR! arquivo nao pode ser aberto");	
	}
	
	for(x=0;x<3;x++){
	
		printf("\nInforme o nome: ");
		scanf("%s",&nome);
		printf("Informe a idade: ");
		scanf("%d",&idade);
		printf("Informe o nota: ");
		scanf("%f",&nota);
		fwrite(nome,sizeof(nome),1,pf);
		fwrite(&idade,sizeof(idade),1,pf);
		fwrite(&nota,sizeof(nota),1,pf);
		
	}
	fclose(pf);
	
	//Gravar arquivos para leitura
	FILE*pf1;
	pf1 = fopen("leitura.txt","a+");
	pf = fopen("ex01.txt","a+");
	if(pf1==NULL){
		printf("\nERROR! arquivo nao pode ser aberto");	
	}

	fread(nome,sizeof(nome),1,pf);
	fread(&idade,sizeof(idade),1,pf);
	fread(&nota,sizeof(nota),1,pf);

	while(!feof(pf)){
		fprintf(pf1,"\nnome: %s \nIdade: %d \nNota: %.1f",nome,idade,nota);
		fread(nome,sizeof(nome),1,pf);
		fread(&idade,sizeof(idade),1,pf);
		fread(&nota,sizeof(nota),1,pf);
	}
	fclose(pf1);
	fclose(pf);
}
