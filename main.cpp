/**
 * Taller 1
 * Computación Paralela y Distribuída
 */

#include <iostream>
#include "funciones.h"

using namespace std;

/**
 * @param argc cantidad de argumentos
 * @param argv argumento
 * @return Código de salida del programa
 */
int main(int argc,char** argv){
    if(argc > 1){
        saludo();
    }
    else{
        integrantes();
    }
    return 0;
}