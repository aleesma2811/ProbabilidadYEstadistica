#include "variablesAleatorias.h"

int main() {
    setlocale(LC_ALL, "");

    int opc;
    bool continuar;
    do {
        // cout << "Factorial de 40: " << factorial(40) << endl;
        // cout << "Combintoria de 5 y 2: " << combinatoria(5, 2) << endl;
        // cout << "probabilidad binomial: " << formulaPB(4, 2, 0.25) << endl;

        cout << "\n============== FUNCIÓNES DE PROBABILIDAD =================" << endl;
        cout << "1) Variables aleatorias" << endl;
        cout << "2) Distribución binomial" << endl;
        cout << "0) Salir " << endl;
        cout << "Elija la función de probabilidad a calcular: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "\n~~~~~~~~~ Variables aleatorias ~~~~~~~~~~~ " << endl;
            cout << "* MEDIA" << endl;
            cout << "* VARIANZA" << endl;
            cout << "* DESVIACIÓN ESTÁNDAR" << endl;
            cout << "Desea continuar? (1 o 0): ";
            cin >> continuar;
            if (continuar == true) {
                variablesAleatorias();
            }
            break;

        case 2:
            probabilidadBinomial();
        default:
            break;
        }
    } while (opc != 0);
    

    // int x[] = {0, 1, 2, 3};
    // float fx[] = {0.125, 0.375, 0.375, 0.125};

    // float mediaFinal = media(4, x, fx);
    // cout << "Media: " << mediaFinal << endl;

    // float varianzaFinal = varianza(4, x, fx, mediaFinal);
    // cout << "Varianza: " << varianzaFinal << endl;

    // float desviacionFinal = desviacionEstandar(varianzaFinal);
    // cout << "Desviación estándar: " << desviacionFinal << endl;
}