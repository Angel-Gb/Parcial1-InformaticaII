#include <iostream>
#include <iomanip> // Para el formato de impresión en la matriz

using namespace std; // Cargar la librería para no usar std cada vez

const int FILAS = 8;
const int COLUMNAS = 8;

// Función para imprimir una matriz 8x8
void imprimirMatriz(bool **matriz) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << setw(2) << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para cambiar una matriz de 0s a 1s y viceversa
void cambiarMatriz(bool **matriz) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = !matriz[i][j]; // Alternar entre 0 y 1 usando operador de negación
        }
    }
}

// Función para liberar la memoria de una matriz
void liberarMatriz(bool **matriz) {
    for (int i = 0; i < FILAS; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

