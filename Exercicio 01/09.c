#include <stdio.h>
int main() {
	int l1,l2,l3;
	printf("Infome L1:");
	scanf("%d",&l1);
	printf("Infome L2:");
	scanf("%d",&l2);
	printf("Infome L3:");
	scanf("%d",&l3);
	if ((l1>l2+l3) && (l2>l1+l3)&&(l3>l2+l1) ){
	
	if ((l1==l2) && (l2==l3)) { 
	printf("O triangulo � equilatero");
	}
    else if((l1!=l2) && (l2!=l3) && (l1!=l3)) {
    	printf("O triangulo � escaleno");
	}
	else {
		printf("O triangulo � escaleno");
	}
	
}
else {
printf("N�o � um triangulo");
}
return(0);
}


