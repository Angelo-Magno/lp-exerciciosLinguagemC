#include <stdio.h>
int main(){
	int n,x;
	FILE*pf;
	pf=fopen("Arq_de_Inteiros.txt","w");
	for(x=0;x<5;x++){
		printf("\nInforme um numero:");
		scanf("%d",&n);
		fwrite(&n,sizeof(n),1,pf);
	}
	fclose(pf);
	return(0);
}
