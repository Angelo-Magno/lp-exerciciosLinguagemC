#include <stdio.h> 
#include <stdlib.h> 

int main() { 
int i; 
float s = 0; 

for (i = 1; i <= 50; i++) { 
s += (2*i-1)/i; 
printf(" %d/%d\t\n",(2*i-1),i); 
} 

printf("\n\n Somatorio: %1.f\n\n",s); 
return (0); 
} 
