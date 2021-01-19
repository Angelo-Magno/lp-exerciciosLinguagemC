#include <stdio.h>
int main() {
float v[5],soma=0.0,media=0.0;
int c=0;

for (c=0;c<5;c++) {
	printf("\nDigite o %d numero:",c+1);
	scanf("%f",&v[c]);
	soma=soma+v[c];	
}
media=soma/c;
printf("\nA media:%.2f",media);
	return(0);
}
