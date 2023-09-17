#include "zonapruebas.h"


int main(int argc, char *argv[])
{
    int resultadoBinario = 0;
    int arreglo[8]={1,0,0,0,1,1,1,0};
    int matriz[8][8];

    for (int j = 0; j < 8; j++){

        resultadoBinario = binarioADecimal(matriz[j]) ;


    }

    resultadoBinario = binarioADecimal(arreglo) ;
    cout << resultadoBinario;



    return 0;

}
