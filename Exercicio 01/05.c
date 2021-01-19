#include <stdio.h>
int main() {
    float qapartament,vconta_e,vconta_a,total;
    printf("Informe a quantidade de apartamentos:");
    scanf("%f",&qapartament);
    printf("Informe o valor da conta de energia:");
    scanf("%f",&vconta_e);
    printf("Informe o valor da conta de %cgua:",160);
    scanf("%f",&vconta_a);
    total=(vconta_e+vconta_a)/qapartament;
    printf("O total a pagar para cada apartamento %c:%.2f",130,total);
    return(0);
}
