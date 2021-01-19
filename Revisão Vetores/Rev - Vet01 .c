#include <stdio.h>
int main() {
	int vet[20],m=-1,p=0,x=0;
	
	for(x=0;x<20;x++) {
		printf("\nDigite o %d valor para vet:",x+1);
		scanf("%d",&vet[x]);
		if((vet[x]<m)||(m<0)) {
			m=vet[x];
			p=x;
		}
	}
	printf("\nO menor valor encontrado: %d \nNa posicao: %d",m,p);
	return(0);
}
