#include <stdio.h>
int main() {
	int n=0,div=0,y=0;
	printf ("Digite um numero:");
	scanf ("%d",&n);
	for(y=0;y<n;y++) {
		div=y%2;
		if (div!=0) {
			printf("\nNumero impar inferio ao digitado:%d",y);
		}
	}
	return(0);
}
