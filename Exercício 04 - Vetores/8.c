#include <stdio.h>
int main() {

int c=0;
float media=0,v1[5],soma=0;

for (c=0;c<5;c++) {
	printf("\nDigite o %d valor para v1 :",c+1);
	scanf("%f",&v1[c]);
	soma=soma+v1[c];
	media=soma/c;

}
for (c=0;c<5;c++){
	if (v1[c]>media){
		printf ("\nacima da media:%.1f", v1[c]);
		
	}
	}
	return(0);
}

