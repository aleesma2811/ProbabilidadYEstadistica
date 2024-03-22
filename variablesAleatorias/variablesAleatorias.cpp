#include "variablesAleatorias.h"
/*---------------------- VARIABLES ALEATORIAS --------------------------*/
void variablesAleatorias()
{
    int tam;
    int opc;
    float mediaF, varianzaF, desviacionEstandarF;

    // Declarar arreglos
    int *x = new int[tam];
    float *fx = new float[tam];

    cout << "Ingrese el tamaño de los arreglos: " << endl;
    cin >> tam;

    // Insertar x
    cout << "\nELEMENTOS DE 'X' " << endl;
    for (int i = 0; i < tam; i++) {
        cout << "\tInserte el " << i + 1 << "° elemento: ";
        cin >> x[i];
    }

    // Insertar f(x)
    cout << "\nELEMENTOS DE 'f(x)' " << endl;
    for (int i = 0; i < tam; i++) {
        cout << "\tInserte el " << i + 1 << "° elemento: ";
        cin >> fx[i];
    }

    // Obtener variables aleatorias
    mediaF = media(tam, x, fx);
    varianzaF = varianza(tam, x, fx, mediaF);
    desviacionEstandarF = desviacionEstandar(varianzaF);

    // Mostrar resultados
    cout << "\n-------- RESULTADOS --------" << endl;
    cout << "\tMedia: " << mediaF << endl;
    cout << "\tVarianza: " << varianzaF << endl;
    cout << "\tDesviación estándar: " << desviacionEstandarF << endl;
}

float media(int tam, int *x, float*fx)
{
    /*
    FÓRMULA MEDIA
        sum[x * f(x)]
    */
    float resultado = 0;

    for (int i = 0; i < tam; i++) {
        resultado += x[i] * fx[i];
    }
    return resultado;
}

float varianza(int tam, int *x, float *fx, float media)
{
    /*
    FÓRMULA VARIANZA
        sum[x^2 * f(x)] - M^2
    */
    float suma = 0;
    float resultado;

    for (int i = 0; i < tam; i++) {
        suma += pow(x[i], 2) * fx[i];
    }
    resultado = suma - pow(media, 2);

    return resultado;
}

float desviacionEstandar(float varianza)
{
    /*
    FÓRMULA
        (varianza)^(1/2)
    */
    return sqrt(varianza);
}

/* -------------------------------- */
void probabilidadBinomial()
{
    int n, x;
    float pi, varianza;
    cout << "\nIngrese los siguientes datos: " << endl;
    cout << "\tn: ";
    cin >> n;
    cout << "\tpi: ";
    cin >> pi;
    cout << "\tx: ";
    cin >> x;

    varianza = varianzaDB(n, pi);

    cout << "\n-------- RESULTADOS --------" << endl;
    cout << "\tProbabilidad binomial: " << formulaPB(n, x, pi) << endl;
    cout << "\tMedia: " << mediaDB(n, pi) << endl;
    cout << "\tVarianza: " << varianza << endl;
    cout << "\tDesviación estándar: " << desviacionDB(varianza) << endl;
}

int factorial(int n)
{
    long long int fact = 1;
    if (n == 1) {
        return 1;
    }
    for (int i = 1; i < n + 1; i++) {
        fact *= i;
    }
    return fact;
}

float combinatoria(int n, int x)
{
    return factorial(n)/(factorial(n - x) * factorial(x));
}

// 
float formulaPB(int n, int x, float pi)
{
    float probabilidad = combinatoria(n, x) * pow(pi, x) * pow((1 - pi), (n - x));
    return probabilidad * 100;
}

float mediaDB(int n, float pi) {
    return n * pi;
}

float varianzaDB(int n, float pi) {
    return (n * pi) * (1 - pi);
}

float desviacionDB(float v) {
    return sqrt(v);
}
