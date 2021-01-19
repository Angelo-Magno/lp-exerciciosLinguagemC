#include <stdio.h>
int main() {
	int v[5],x=0,y=0,aux=0;
	
	for(x=0;x<5;x++) {
		printf("Digite o %d para Vet:",x+1);
		scanf("%d",&v[x]);
	}
	for (x=0;x<5;x++) {
	
	for(y=x+1;y<5;y++){
		if (v[x]>v[y]){
			aux=v[x];
			v[x]=v[y];
			v[y]=aux;
		}
	}	
	}
	for(x=0;x<5;x++) 
		printf("\nVetor ordem crescente: %d",v[x]);
	return(0);
}
