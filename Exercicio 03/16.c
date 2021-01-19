#include <stdio.h>
int main() {
	int peso,menor=201;
	
	do {	
	printf ("Informe o peso:");
	scanf("%d",&peso);
	
	if(peso<menor) {
		menor=peso;
	}

 } while(peso<=200);
printf("\nO menor peso foi:%d",menor);
return(0);
}
