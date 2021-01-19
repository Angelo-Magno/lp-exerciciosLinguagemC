#include <stdio.h>
int main() {
	float v[10],maior;
	int x;
	for(x=0;x<10;x++){
		printf("Digite um valor para v[%d]:",x+1);
		scanf("%f",&v[x]);
		if(maior<v[x]) {
			maior=v[x];
		}
	}
	for(x=0;x<10;x++){
		v[x]=v[x]/maior;
		printf("\nApos divisao V[%.1f]: %.2f",x+1,v[x]);
	}
}
