#include <stdio.h>

int main(){
	float soma = 0,divisao;
	int i,numerador = 1000;
	
	for(i = 1; i <= 50; i++){
		divisao = numerador/i;
		printf("%d/%d\n",numerador,i);
		if(numerador % 2 == 0){
			soma += divisao;
		}else{
			soma -= divisao;
		}
		numerador -= 3;
	}
	printf("Soma : %.0f\n",soma - 1);
	return(0);
}
