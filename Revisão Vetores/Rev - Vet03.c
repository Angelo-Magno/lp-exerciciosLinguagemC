#include <stdio.h>
int main() {
	int v1[30],x=0,aux=0;
	
	for(x=0;x<30;x++) {
		printf("\nV1[%d]:",x);
		scanf("%d",&v1[x]);
	}
	for(x=0;x<29;x=x+2) {
		aux=v1[x];
		v1[x]=v1[x+1];
		v1[x+1]=aux;
	}
	
	for(x=0;x<30;x++) {
		printf("\nV1[%d]: %d",x,v1[x]);
	}
return(0);
}

