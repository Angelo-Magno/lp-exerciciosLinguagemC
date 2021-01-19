#include <stdio.h>
int main() {
	float n1,n2,n3,maior,menor;
	printf("Informe o primeiro valor:");
	scanf("%f",&n1);
	printf("Informe o segundo valor:");
	scanf("%f",&n2);
	printf("Informe o terceiro valor:");
	scanf("%f",&n3);
	maior=n1;
	if (n2>maior) {
		maior=n2;
	}
	if (n3>maior) {
		maior=n3;
	}
	menor=n1;
	if (n2<menor) {
		menor=n2;
	}
	if (n3<menor) {
		menor=n3;
	}
	printf("O maior valor:%.1f \nO menor valor:%.1f",maior,menor);
	return(0);
}
