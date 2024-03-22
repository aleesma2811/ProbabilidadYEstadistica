#pragma once
#include <iostream>
#include <math.h>
// #include <gmpxx.h>

using namespace std;

/* -------------- Variables aleatorias ---------------- */
void variablesAleatorias();
float media(int tam, int* x, float* fx);
float varianza(int tam, int* x, float* fx, float media);
float desviacionEstandar(float varianza);

/* ----------- Distribución de probabilidad binomial---------- */
void probabilidadBinomial();

int factorial(int n);
float combinatoria(int n, int x);
float formulaPB(int n, int x, float pi);

float mediaDB(int n, float pi);
float varianzaDB(int n, float pi);
float desviacionDB(float varianza);