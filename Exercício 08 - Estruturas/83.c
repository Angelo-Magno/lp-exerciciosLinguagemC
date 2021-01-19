#include <stdio.h>
typedef struct formulario{
	int matr;
	int idade;
	char nome[20];
}aluno;
int main(){
	aluno p;
	int aux,c=0;
	FILE*pf;
	pf= fopen("pessoa.txt","a+");
	do{
		c=0;
		printf("\nInforme a matricula: ");
		scanf("%d",&aux);
		rewind(pf);
		fread(&p,sizeof(p),1,pf);
		while(!feof(pf)){
				
			if(aux==p.matr){
				printf("\nMatricula: %d -- Idade: %d -- Nome: %s\n",p.matr,p.idade,p.nome);
				c++;
			}
			fread(&p,sizeof(p),1,pf);
		}
		
			if(c==0) {
				printf("\nMatricula nao existe solicite nova entrada\n");
			}
	}while(aux!=999);
	
}
