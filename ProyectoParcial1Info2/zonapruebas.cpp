#include "zonapruebas.h"

void ZonaPruebas()
{

}

int binarioADecimal(int arreglo[]){
    int total = 0;
    for (int i = 0; i <8; i++){
        if(arreglo[i]==1){
            total += potencia(2,7-i);
        }
    }



    return total;
}

int potencia(int num, int potencia){
    int potenciaTotal = 1;
    for (int j = 0; j < potencia ; j++){
        potenciaTotal *= num;
    }
    return potenciaTotal;
}
