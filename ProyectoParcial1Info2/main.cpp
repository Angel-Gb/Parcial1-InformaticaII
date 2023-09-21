#include "zonapruebas.h"
#include "funciones_utilidades.h"


int main(int argc, char *argv[])
{
    //int *patron1(){
    int *patroncito= new int[8];

    int patron[8][8]={}; // Declaración de una matriz llamada "patron" de tamaño 8x8
    int contador = 0;
    // Generar el patrón específico
    for (int fila = 0; fila < 4; fila++, contador++) {
        for (int columna = 0; columna < 8; columna++) {
            // Esta condición determina si el valor en la posición [i][j] debe ser 1 o 0
            if ((columna>=(3-contador))&&(columna<=(4+contador))){
                patron[fila][columna] = 1;
                patron[7-fila][columna] = 1;
            }
            else{
                patron[fila][columna] = 0;
                patron[7-fila][columna] = 0;
            }
        }
    }
    for (int i = 0; i<8; i++){
        patroncito[i] = binarioADecimal(patron[i]);
        cout << patroncito[i]<< endl;
    }
        /*
        for (int i = 0; i<8; i++)
            cout<< patron[0][i]<< endl;

*/








    /*
    int resultadoBinario = 0;
    int arreglo[8]={1,0,0,0,1,1,1,0};
    int matriz[8][8];

    for (int j = 0; j < 8; j++){

        resultadoBinario = binarioADecimal(matriz[j]) ;


    }

    resultadoBinario = binarioADecimal(arreglo) ;
    cout << resultadoBinario;


*/
    return 0;

}
