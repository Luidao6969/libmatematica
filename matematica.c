#include <stdio.h>
#include <math.h>
#include "matematica.h"

#define pi 3.1416


float calcular_seno(float angulo){
float sen = pi*(angulo/180);
return sin(sen);

}

float calcular_cosseno(float angulo){
float coss = pi*(angulo/180);
return cos(coss);

}

float calcular_tangente(float angulo){
float tg = pi*(angulo/180);
return tan(tg);

}