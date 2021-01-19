#include <stdio.h>
int main() {
	int n1,resto=0;
	printf("Informe um numero:");
	scanf("%d",&n1);
	resto = n1 % 2;
	if( resto== 0) {
		printf("O n%cmero %c par",163,130);
	}
	else {
		printf("O n%cmero %c %cmpar",163,130,214);
	}
return(0);
}
