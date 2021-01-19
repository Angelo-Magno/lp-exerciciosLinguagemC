#include <stdio.h>
int main() {
	int n=0,x=0,y=0;
	printf("Digite um numero:");
	scanf("%d",&n);
	
	for (y=n;y>1;) {
		y--;
		x=y*n;
		n=x;	
	}
	printf("O fatorial do numero digitado:%d",x);
	return(0);
}
