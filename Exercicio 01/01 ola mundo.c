#include <stdio.h>
int main () {
	float n1,n2,n3,media;
	printf("\t Digite a primeira nota:");
	scanf("%f",&n1);
	printf("\t Digite a segunda nota:");
	scanf("%f",&n2);
	printf("\t Digite a terceira nota:");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	printf("\t \n A m%cdia %c:%f",130,130,media);
	float a=0,b=1,taxa,taxa1,y=0;

	while(a>b) {
		taxa=(90000*0.9);
		a=taxa+90000;
		taxa1=(200000*0.015);
		b=taxa1+200000;
		y++;
	}
	printf("\nA Quantidade de anos necessaria: %f",y);
	return(0);
}
