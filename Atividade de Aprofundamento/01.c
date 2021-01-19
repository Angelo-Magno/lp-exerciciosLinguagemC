#include <stdio.h>
int main() {
	int h=0,m=0,s=0;
	
	printf("Informe a duracao do evento em segundos:");
	scanf("%d",&s);
	h=s/3600;
	m=(s-(h*3600))/60;
	s=s-(h*3600)-(m*60);
	printf("\nDuracao do evento: %d:%d:%d ",h,m,s);
	return(0);
}
