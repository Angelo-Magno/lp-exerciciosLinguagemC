#include <stdio.h>
#include <string.h>
int main() {
	char v [5] [10];
	int x=0,y=0,cont=0,soma=0;
	float media=0;
	for(x=0;x<5;x++){
		printf("Informe o nome:");
		gets(v[x]);
		soma=soma+strlen(v[x]);
		for(y=0;y<10;y++){
			if(v[x][y]=='a') {
				cont++;
			}
		}
	}
	media=soma/5;
	for (x=0;x<5;x++){
		printf("\n Nome (%d)",x+1);
		puts(v[x]);
	}
	printf("\nA media dos nomes:%.1f",media);
	printf("\nA media dos nomes:%d",cont);
	return(0);
}
