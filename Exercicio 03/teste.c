#include <stdio.h>
int main() {
	int peso=0,menor=0;
	printf ("Informe o peso:");
	scanf("%d",&peso);
	menor=peso	;
	if(peso<menor) {
		menor=peso;
	}
	while(peso<=200) {	
	printf ("Informe o peso:");
	scanf("%d",&peso);
		
	if(peso<menor) {
		menor=peso;
	}

 } 
printf("\nO menor peso foi:%d",menor);
return(0);
}
