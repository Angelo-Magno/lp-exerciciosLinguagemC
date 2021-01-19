#include <math.h>
//Soma de dois números
float fsoma(float p1, float p2){
	return(p1+p2);
}
//Media de dois números
float fmedia(float p1, float p2){
	float media = fsoma(p1,p2)/2;
	return(media); 
}
//Quadrado de um número
float fquadrado(float p1){
	return(p1*p1);
}
//Raiz da soma dos quadrados
float fraizsomaquadrados(float p1, float p2){
	float raiz = sqrt(fquadrado(p1)+fquadrado(p2));
	return(raiz);
}
