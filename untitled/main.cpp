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
    // Inicializar las matrices de patrones utilizando los patrones constantes
    for (int i = 0; i < FILAS; i++) {
        patron1[i] = new bool[COLUMNAS];
        patron2[i] = new bool[COLUMNAS];
        patron3[i] = new bool[COLUMNAS];
        patron4[i] = new bool[COLUMNAS];

        for (int j = 0; j < COLUMNAS; j++) {
            patron1[i][j] = pat1[i][j];
            patron2[i][j] = pat2[i][j];
            patron3[i][j] = pat3[i][j];
            patron4[i][j] = pat4[i][j];
        }
    }

    int opcion;
    bool salir = false;

    while (!salir) {
        cout << "Menu:" << endl;
        cout << "1. Cambiar matriz de 0s a 1s y viceversa" << endl;
        cout << "2. Imprimir matriz" << endl;
        cout << "3. Seleccionar un patron (1-4)" << endl;
                cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
                cin >> opcion;

        switch (opcion) {
        case 1:
            cambiarMatriz(matriz);
            break;
        case 2:
            cout << "Matriz Actual:" << endl;
            imprimirMatriz(matriz);
            break;
        case 3:
        {
            int patronSeleccionado;
            cout << "Seleccione un patron (1-4): ";
                    cin >> patronSeleccionado;

            if (patronSeleccionado == 1) {
                cout << "Patron 1:" << endl;
                        imprimirMatriz(patron1);
            } else if (patronSeleccionado == 2) {
                cout << "Patron 2:" << endl;
                        imprimirMatriz(patron2);
            } else if (patronSeleccionado == 3) {
                cout << "Patron 3:" << endl;
                        imprimirMatriz(patron3);
            } else if (patronSeleccionado == 4) {
                cout << "Patron 4:" << endl;
                        imprimirMatriz(patron4);
            } else {
                cout << "Opcion no valida. Seleccione un patron del 1 al 4." << endl;
            }
            break;
        }
        case 4:
            salir = true;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    }

    // Liberar la memoria de las matrices
    liberarMatriz(matriz);
    liberarMatriz(patron1);
    liberarMatriz(patron2);
    liberarMatriz(patron3);
    liberarMatriz(patron4);

    return 0;
}
