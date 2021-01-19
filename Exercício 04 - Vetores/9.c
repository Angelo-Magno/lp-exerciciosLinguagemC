#include <stdio.h>
int main() {

int c=0,p=0;
float menor=0,v1[5];

for (c=0;c<5;c++) {
	printf("\nDigite o %d valor para v1 :",c+1);
	scanf("%f",&v1[c]);
if ((v1[c]<menor) || (menor==0)){
	menor=v1[c];
	p=c;
	
}

}
printf ("\nO menor :%f, e a posicao: %d", menor,p);
return(0);
}

