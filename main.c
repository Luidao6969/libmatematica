#include <stdio.h>
#include "matematica.h"

double main(){
float angulo = 80;


printf("Seno do angulo %f = aproximadamente %f ", angulo, calcular_seno(angulo)); 
printf("\n");
printf("Cosseno do angulo %f = aproximadamente %f ", angulo, calcular_cosseno(angulo)); 
printf("\n");
printf("Tangente do angulo %f = aproximadamente %f ", angulo, calcular_tangente(angulo)); 

system ("pause");
}