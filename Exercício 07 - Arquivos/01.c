#include <stdio.h>
int main(){
	FILE*pf;
	//Validando abertura
	pf=fopen("cliente.txt","a+");
	if(pf==NULL){
		printf("\nArquivo cliente.txt nao pode ser aberto");
	}
	else{
		printf("\nArquivo cliente.txt aberto com sucesso");
	}
	//Validando fechamento
	if(	fclose(pf)==0){
		printf("\nArquivo fechado com sucesso");
	}
	else{
		printf("\n Problema no fechamento do arquivo");
	}
	
}

