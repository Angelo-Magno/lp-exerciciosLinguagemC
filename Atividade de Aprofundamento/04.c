#include <stdio.h>
#include <math.h>

int main(){
	float soma = 0,divisao;
	int i,potencia = 25,x;
	
	printf("Informe om valor de entrada: ");
	scanf("%d",&x);
	
	for(i = 1; i <= 25; i++){
		divisao = (pow(x,potencia))/i;
		printf("%d^%d/%d\n",x,potencia,i);
		if(potencia % 2 != 0){
			soma += divisao; 
		}else{
			soma -= divisao;
		}
		potencia--;	
	}
	printf("Soma : %.0f\n",soma);
}

