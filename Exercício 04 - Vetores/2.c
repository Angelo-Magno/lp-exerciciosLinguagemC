#include <stdio.h>
int main() {
int v[5],soma=0,c=0;
for (c=0;c<5;c++) {
	printf("\nDigite o %d numero:",c+1);
	scanf("%d",&v[c]);
	soma=soma+v[c];	
}
printf("\nA soma:%d",soma);
	return(0);
}
