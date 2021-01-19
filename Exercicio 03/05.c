#include <stdio.h>
int main( ) {
	int n=0,d=1,m=0;
	printf("Digite um numero:");
	scanf("%d",&n);
	for(;d<10;d++) {
		m=n*d;
		printf("\n%d X %d = %d",n,d,m);
	}
}
