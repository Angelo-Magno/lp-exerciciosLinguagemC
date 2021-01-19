#include <stdio.h>
int main() {

int v1[5],v2[5],v3[5],c=0;

for (c=0;c<5;c++) {
	printf("\nDigite o %d valor para v1 :",c+1);
	scanf("%d",&v1[c]);
}
for (c=0;c<5;c++) {
	printf("\n\nDigite o %d valor para v2:",c+1);
	scanf("%d",&v2[c]);
	v3[c]=v2[c]+v1[c];
	}
	
	for (c=0;c<5;c++) {
	printf("\nValores do v3: %d",v3[c]);
}
	return(0);
}
