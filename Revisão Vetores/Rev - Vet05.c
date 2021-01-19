#include <stdio.h>
#include <stdlib.h>
int main() {
	int v[10],x=0,y,z,c;
	
	for(c=-1;c<10;) {
		x++;
		z=0;	
		for(y=1;y<x;y++) {
			if(x%y==0) {
				z++;	
			} 
		}
		if(z==1) {
			c++;
			v[c]=x;
		}
	}
	for(c=0;c<10;c++)
	printf("\nNumeros Primos: %d",v[c]);
return(0);
}
