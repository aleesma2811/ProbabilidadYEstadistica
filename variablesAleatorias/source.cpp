#include "variablesAleatorias.h"

int main() {
    setlocale(LC_ALL, "");

    int opc;
    do {
        cout << "\n============== FUNCIÓNES DE PROBABILIDAD =================" << endl;
        cout << "1) Variables aleatorias" << endl;
        cout << "0) Salir " << endl;
        cout << "Elija la función de probabilidad a calcular: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            variablesAleatorias();
            break;
        
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