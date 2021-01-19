#include <stdio.h>
int main() {
	int n,w,x,y,z,a;
	w=0;
	x=1;
	printf("Informe um numero da serie de Fibomacci:");
	scanf("%d",&n);
	for (;y<=n;) {
	z=w+x;
	if (y==n) {
		a=z-x;
	}
	w=x;
	x=z;
	y=z;	
}
printf("\nO numero anterior na serie de fibonacci %c:%d",130,a);
return(0);	
}
