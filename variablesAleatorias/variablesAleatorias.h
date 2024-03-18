#pragma once
#include <iostream>
#include <math.h>

using namespace std;

int variablesAleatorias();
float media(int tam, int* x, float* fx);
float varianza(int tam, int* x, float* fx, float media);
float desviacionEstandar(float varianza);