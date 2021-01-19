#include <stdio.h>
#include <locale.h>

double fatorial(int deno){
	long long int fato = 1;
	int i;
	
	for(i = 1; i <= deno; i++){
		fato *= i;
	}	
	return (fato);
}
int main(){
	int i,j,nume = 99,deno = 1;
	double fato;
	float soma = 0,divisao;
	setlocale(LC_ALL,"");
	
	printf("100/0\n");
	printf("Fatorial de 0 = 0\n");
	
	for(i = 1; i <= 20; i++){
		fato = fatorial(deno); //chama a função fatorial.
		divisao = nume/fato; //dividi nume pelo fatorial de deno
		soma += divisao; //somatorio 
		printf("%d/%d\n",nume,deno);
		printf("Fatorial de %d = %.0f\n",deno,fato);
		deno++; 
		nume--;
	}
	printf("\n\n\nSoma é : %lf\n",soma);
	return(0);
}

