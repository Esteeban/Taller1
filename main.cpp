/**
 * Taller 1
 * Computación Paralela y Distribuída
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <chrono>

#include "funciones.h"

using namespace std;

/**
 * @param argc cantidad de argumentos
 * @param argv argumento
 * @return Código de salida del programa
 */
int main(int argc,char** argv){
    auto start = chrono::system_clock::now();
    saludo();
    if(argc > 1){
        std::string archivo(argv[1]);
        std::ifstream lectura(archivo);

        std::ofstream escritura("promedios.csv");

        std::cout<<"Lectura de archivo..."<<std::endl;

        if(lectura){
            for (std::string linea; getline(lectura,linea) ; ) {
                //std::vector<int> puntajes = obtenerdatos(linea);
                //double promedio = promediar(puntajes);

                //std::string salida = std::to_string(puntajes.at(1)) + ";" + std::to_string(promedio);
                //escritura << salida << std::endl;
                //puntajes.clear();
            }
        }
    }
    else{
        std::cout<<"Error"<<std::endl;
    }
    integrantes();
    auto end = chrono::system_clock::now();
    chrono::duration<float,milli> duration = end - start;
    std::cout<<duration.count()<<"'ms"<<std::endl;
    return EXIT_SUCCESS;
}