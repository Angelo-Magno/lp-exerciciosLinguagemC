#include <stdio.h>
int main() {
	int v[10],aux[10],z=0,x=0,y=0,k=0,flag=0;
	
	for(x=0;x<10;x++){
		printf("Digite um valor para v[%d]:",x+1);
		scanf("%d",&v[x]);		
	}

	k--;
	for(x=0;x<10;x++){
		flag=0;
		for(y=0;y<10;y++) {
			if(v[x]==aux[y]){
				flag=1;
				z=z+flag;
			}
		}
		if(flag==0) {
			k++;
			aux[k]=v[x];
		}
		
	}
	
	printf("\Repetidos: %d",z);
	for(y=0;y<=k;y++)
		printf("\nValores distintos: %d",aux[y]);
	return(0);
}
