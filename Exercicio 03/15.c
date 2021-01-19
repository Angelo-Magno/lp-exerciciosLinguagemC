#include <stdio.h>
#include <math.h>
int main() {
	float a=90000,b=200000,taxa=0,taxa1=0;
	int y=0;
	
	do {
		
		a=a+(a*0.03);
		
		b=b+(b*0.015);	
		y++;
	} while (a<b);
	
	printf("\nA Quantidade de anos necessaria: %d",y);
return(0);
}
