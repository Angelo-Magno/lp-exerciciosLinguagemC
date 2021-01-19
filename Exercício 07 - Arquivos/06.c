#include <stdio.h>
int main() {
	char nome[20];
	float nota1,nota2;
	int x;
	FILE*pf;
	pf=fopen("ex03.txt","w");
	if(pf==NULL){
		printf("\nArquivo nao pode ser aberto");
	}
	
	for(x=0;x<4;x++){
		fflush(stdin);
		printf("\nInforme o nome: ");
		scanf("%s",&nome);
		printf("\nDigite nota1: ");
		scanf("%f",&nota1);
		printf("\nDigite nota2:");
		scanf("%f",&nota2);
		fwrite(nome,sizeof(nome),1,pf);
		fwrite(&nota1,sizeof(nota1),1,pf);
		fwrite(&nota2,sizeof(nota2),1,pf);
		printf("\n**GRAVADO**  %s - %.1f - %.1f\n",nome,nota1,nota2);
	}
	fclose(pf);
}
