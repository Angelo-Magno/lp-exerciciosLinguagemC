#include <stdio.h>
int main() {
	int v[10],aux[10],x=0,y=0,k=0,j=0,flag=0;
	
	for(x=0;x<10;x++){
		printf("Digite um valor para v[%d]:",x+1);
		scanf("%d",&v[x]);		
	}

	k--;
	j--;
	for(x=0;x<10;x++){
		flag=0;
		for(y=0;y<10;y++) {
			if(v[x]==aux[y]){
				flag=1;
			}
		}
		if(flag==0) {
			k++;
			aux[k]=v[x];
		}
		if (flag==1){
			j++;
			v[j]=v[x];
		}
		
	}
	
	
	for(x=0;x<=k;x++){
		flag=0;
		for(y=0;y<=j;y++){		
			if (aux[x]==v[y]){
				flag++;
				
			}
		}
		printf("\nValores distintos: %d  || Repetiu: %d vez ",aux[x],flag+1);
	}
		
	return(0);
}
