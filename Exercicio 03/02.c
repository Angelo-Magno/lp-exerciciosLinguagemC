#include <stdio.h>
int main() {
	int n=0,x=1,y=1;
	printf("Digite um numero:");
	scanf("%d",&n);
	
	for (x=1;x<=n;x++) {
		y=y*x;	
	}
	printf("O fatorial do numero digitado:%d",y);
	return(0);
}
