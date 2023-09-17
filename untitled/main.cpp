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

int main() {
    bool **matriz = new bool *[FILAS];
    for (int i = 0; i < FILAS; i++) {
        matriz[i] = new bool[COLUMNAS];
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = false; // Inicializar con ceros
        }
    }

    // Declarar matrices de patrones
    bool **patron1 = new bool *[FILAS];
    bool **patron2 = new bool *[FILAS];
    bool **patron3 = new bool *[FILAS];
    bool **patron4 = new bool *[FILAS];

    // Inicializar matrices de patrones
    // (cada uno es un arreglo bidimensional constante)
    const bool pat1[FILAS][COLUMNAS] = {
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {1, 0, 0, 0, 0, 0, 0, 1}
    };

    const bool pat2[FILAS][COLUMNAS] = {
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0}
    };

    const bool pat3[FILAS][COLUMNAS] = {
        {1, 1, 0, 1, 1, 0, 1, 1},
        {1, 1, 0, 1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1, 1, 0, 1},
        {0, 1, 1, 0, 1, 1, 0, 1},
        {1, 1, 0, 1, 1, 0, 1, 1},
        {1, 1, 0, 1, 1, 0, 1, 1},
        {0, 1, 1, 0, 1, 1, 0, 1},
        {0, 1, 1, 0, 1, 1, 0, 1}
    };

    const bool pat4[FILAS][COLUMNAS] = {
        {1, 1, 1, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 1, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 0, 0, 0},
        {1, 1, 1, 1, 0, 0, 0, 0}
    };

    return 0;
}
