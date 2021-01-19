#include <stdio.h>
int main() {
	int a[5],b[5],c[5],cont=0;
	for(cont=0;cont<=4;cont++) {
		printf("Digite um numero A:");
		scanf("%d",&a[cont]);
		printf("Digite um numero B:");
		scanf("%d",&b[cont]);
		c[cont]=(a[cont])*(b[cont]);
	}
	for(cont=0;cont<=4;cont++)
	
	printf("O resultado:%d",c[cont]);
	return(0);
}
