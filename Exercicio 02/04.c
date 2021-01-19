#include <stdio.h>
int main() {
	int ano,bi;
	printf("Digite um ano com 4 digitos:");
	scanf("%d",&ano);
	bi=ano%4;
	if (bi==0) {
		printf(" O ano %c bissexto",130);
	}
	else printf("O ano n%co %c bissexto",198,130);
	return(0);
}
