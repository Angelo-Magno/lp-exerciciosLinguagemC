#include <stdio.h>

//Transformar em segundos
int fsegundos(int hora, int min, int seg) {
	return(60*(min+hora*60)+seg);
}
//Calcular percentual
float fpercentual(float val, float tx) {
	float valor=val*tx/100;
	return(valor);
}

int main() {
	int total=fsegundos(11,15,30);
	float perc=fpercentual(1000,25);
	printf("Segundos: %d\n",total);
	printf("Percentual: %.0f\n",perc);
	return(0);
}
