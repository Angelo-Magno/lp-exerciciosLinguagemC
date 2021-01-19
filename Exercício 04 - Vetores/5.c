#include <stdio.h>
int main() {

int v[10],soma=0,c=0;

for (c=0;c<10;c++) {
	printf("\nDigite a %d idade:",c+1);
	scanf("%d",&v[c]);
if((v[c]%2)==0) {
	soma=soma+v[c];
}
}

printf("\nA soma:%d",soma);
	return(0);
}
