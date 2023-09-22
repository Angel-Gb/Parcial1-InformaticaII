#include "zonapruebas.h"
#include "funciones_utilidades.h"


int main() {
    int *patroncito = new int[8];
    // Definición de dos secuencias de números (secuencia1 y secuencia2)
    int secuencia1[8] = {1, 1, 0, 1, 1, 0, 1, 1};
    int secuencia2[8] = {0, 1, 1, 0, 1, 1, 0, 1};
    int **matriz = new int *[8];
    // Iteración a través de las filas
    for (int i = 0; i < 8; i++) {
        // Determina cuál secuencia se utilizará en esta fila basándose en el valor de i
        // Se alterna entre secuencia1 y secuencia2 en grupos de 4 filas.

        matriz[i] = (i % 4 < 2) ? secuencia1 : secuencia2;
    }
    for (int i = 0; i<8; i++){
        patroncito[i] = binarioADecimal(matriz[i]);
    }
    delete[] matriz;


    return patroncito;
    return 0;

}
