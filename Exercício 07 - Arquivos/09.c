#include <stdio.h>
int main(){
	int n,i=0,v[5];
	
	FILE*pf;
	//Ler os valores e grava no vetor
	pf=fopen("Arq_de_Inteiros.txt","a+");
	fread(&n,sizeof(n),1,pf);
	while(!feof(pf)){
		printf("\n Inteiro: %d",n);
		v[i]=n*2;
		i++;
		fread(&n,sizeof(n),1,pf);
	}
	
	//subistitui pelos valores do vetor 
	fclose(pf);
	pf=fopen("Arq_de_Inteiros.txt","w");
		fwrite(&v,sizeof(v),1,pf);
	fclose(pf);
	
	//Exibe os novos valores
	printf("\n\nNovos valore:\n");
	pf=fopen("Arq_de_Inteiros.txt","a+");
	fread(&n,sizeof(n),1,pf);
	while(!feof(pf)){
		printf("\n\ Inteiro: %d",n);
		fread(&n,sizeof(n),1,pf);
	}
	fclose(pf);	
return(0);	
	
}

