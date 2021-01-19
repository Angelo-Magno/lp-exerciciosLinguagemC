#include <stdio.h>
int main() {
	int n,w,x,y,z,a;
	w=0;
	x=1;
	printf("Informe um numero da serie de Fibomacci:");
	scanf("%d",&n);
	for (;y<n;) {
	z=w+x;
	w=x;
	x=z;
	y=z;
	printf("\nA serie de fibonacci %c:%d",130,z);	
}

return(0);	
}
