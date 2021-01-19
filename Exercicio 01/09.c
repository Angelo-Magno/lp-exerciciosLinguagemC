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
	printf("O triangulo é equilatero");
	}
    else if((l1!=l2) && (l2!=l3) && (l1!=l3)) {
    	printf("O triangulo é escaleno");
	}
	else {
		printf("O triangulo é escaleno");
	}
	
}
else {
printf("Não é um triangulo");
}
return(0);
}


