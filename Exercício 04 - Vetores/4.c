#include <stdio.h>
int main() {

int v[5],maior,c=0;

for (c=0;c<5;c++) {
	printf("\nDigite a %d idade:",c+1);
	scanf("%d",&v[c]);
	if (maior<v[c]) {
		maior=v[c];
	}
}

printf("\nA media:%d",maior);
	return(0);
}
