#include <stdio.h>
int main() {
	int v1[5],v2[5],v3[20],x=0;
	
	for(x=0;x<5;x++) {
		printf("\nDigite o %d valor para vet1:",x+1);
		scanf("%d",&v1[x]);
	}
	printf("\n------------------------------------");
	for(x=0;x<5;x++) {
		printf("\nDigite o %d valor para vet2:",x+1);
		scanf("%d",&v2[x]);
	}
	for(x=0;x<5;x++) {
		v3[x]=v1[x]*v2[x];
		printf("\nVet na posi %d = %d",x+1,v3[x]);
	}
	return(0);
}
