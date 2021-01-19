#include <stdio.h>
float media(int n, float vet[]){
	int i; float soma;
	for(i=0;i<n;i++){
		soma=soma+vet[i];
	}
	return(soma/n);
}

int main() {
	int n,x;	
	printf("Informe a quantidade: ");
	scanf("%d",&n);
	float v[n];
	for(x=0;x<n;x++){
		printf("Informe o numero:");
		scanf("%f",&v[x]);
	}
	printf("\nA media: %.1f", media(n,v));
}
	
	
	
	
	
	
	
	
	
	
		
}

