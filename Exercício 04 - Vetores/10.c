#include <stdio.h>
int main() {
	int a[5]={0,0,0,0,0},b[5]={0,0,0,0,0},c[10]={0,0,0,0,0,0,0,0,0,0},x=0,y=0,i=0,cont=0;
	
	for(x=0;x<5;x++) {
		printf("Digite um numero para A[%d]:",x+1);
		scanf("%d",&a[x]);
	}
	for(x=0;x<5;x++) {
		printf("Digite um numero para B[%d]:",x+1);
		scanf("%d",&b[x]);	
	}
	
	i--;
	for(x=0;x<5;x++) {
		cont=0;
		for(y=0;y<10;y++){
			
			if(a[x]==c[y]){
				cont++;
			}
		}
		if(cont==0) {
			i++;
			c[i]=a[x];
		}
		
		cont=0;
		for(y=0;y<10;y++){
			
			if(b[x]==c[y]){
				cont++;
			}
		}
		if(cont==0) {
			i++;
			c[i]=b[x];
		}
	}
	
	for(x=0;x<=i;x++) 			
	printf("\nUniao:%d",c[x]);
	
	return(0);
}
