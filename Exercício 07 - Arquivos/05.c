#include <stdio.h>
int main(){
	char placa[8];
	int infra;
	float multa,x,x1,x2;
	FILE*pf;
	pf=fopen("ex02.txt","a+");
	if(pf==NULL) {
		printf("ERROR! Arquivo nao pode se aberto");
	}
	fread(placa,sizeof(placa),1,pf);
	fread(&infra,sizeof(infra),1,pf);
	fread(&multa,sizeof(multa),1,pf);
	while(!feof(pf)){
		
		if(infra==1){x=x+multa;}
		else if(infra==2){x1=x1+multa;}
		else{x2=x2+multa;}
		
		fread(placa,sizeof(placa),1,pf);
		fread(&infra,sizeof(infra),1,pf);
		fread(&multa,sizeof(multa),1,pf);
		
	}
	fclose(pf);
	printf("\nTotal infracao 1: %.1f \nTotal infracao 2: %.1f \nTotal infracao 3: %.1f",x,x1,x2);
	return(0);
}
