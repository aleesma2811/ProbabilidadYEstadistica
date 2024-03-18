#include "variablesAleatorias.h"

/*---------------------- VARIABLES ALEATORIAS --------------------------*/
int variablesAleatorias()
{
    cout << "prueba " << endl;
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

    
    return 0;
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
