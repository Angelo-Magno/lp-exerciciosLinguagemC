#include <stdio.h>

int main() {
	
	int nconta[5]={1,2,3,4,5},n,x,y=0;
	float satual[5]={1500.30,10000.50,300.60,100,60};
	float sminimo=30.00,taxa=5,d,r,saldo;
	char codtrans,escolha;
	
	do{
		while(y==0){
		
			printf("Informe o numero da conta:");
			scanf("%d",&n);
			for(x=0;x<5;x++){
				if(n==nconta[x]){
					saldo=satual[x];
					y++;
				}			
			}
			if(y==0) printf("Numero da conta invalido\n");
		}
		
	
		fflush(stdin);
		printf("Deseja Depositar(D) ou Retirar(R): ");
		scanf("%c",&codtrans);
		
		if(codtrans=='d'||codtrans=='D'){
			printf("Quanto deseja depositar: ");
			scanf("%f",&d);
			saldo=saldo+d;
		}
		else if(codtrans=='r'||codtrans=='R'){
			printf("Quanto deseja retirar: ");
			scanf("%f",&r);
			saldo=saldo-r;
		} else printf("Codigo de transferecia invalido\n");
	
		fflush(stdin);
		printf("Deseja Continuar(C) ou quer Sair(S) :");
		scanf("%c",&escolha);
		
	}while(escolha=='c'||escolha=='C'); 
	
	if(saldo < sminimo){
		printf("Insuficiencia de fundos na conta");
		saldo=saldo-taxa;
	}else printf("Saldo da conta ao final do dia: R$: %.2f",saldo);

return(0);
}
