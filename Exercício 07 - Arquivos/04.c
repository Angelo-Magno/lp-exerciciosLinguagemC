#include <stdio.h>
int main(){
	char placa[8];
	int infra,x;
	float multa;
	FILE*pf;
	pf=fopen("ex02.txt","a+");
	if(pf==NULL) {
		printf("ERROR! Arquivo nao pode se aberto");
	}
	for(x=0;x<5;x++){
		printf("\nInforme a placa:");
		scanf("%s",&placa);
		printf("Informe a infracao:");
		scanf("%d",&infra);
		printf("Informe o valor da multa:");
		scanf("%f",&multa);
		fwrite(placa,sizeof(placa),1,pf);
		fwrite(&infra,sizeof(infra),1,pf);
		fwrite(&multa,sizeof(multa),1,pf);
	}
	fclose(pf);
}
