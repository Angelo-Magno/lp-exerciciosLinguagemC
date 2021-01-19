#include <stdio.h>
int main() {
	int v[10],x=0,y=0,aux=0;
	
	for(x=0;x<10;x++){
		printf("Digite um valor para v[%d]:",x+1);
		scanf("%d",&v[x]);
	}
		
	for (x=0;x<10;x++) {
	
		for(y=x+1;y<10;y++){
			if (v[x]>v[y]){
				aux=v[x];
				v[x]=v[y];
				v[y]=aux;
			}
		}	
		
	}
	for (x=0;x<3;x++)
		printf("\nO tres menores valores: %d",v[x]);
	return(0);
}
