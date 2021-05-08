/**
 * Taller 1
 * Computación Paralela y Distribuída
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <chrono>
#include <map>

#include "funciones.h"
#include "estudiante.hpp"

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

        std::ofstream escritura("promediosPrueba.csv");
        //std::vector<estudiante> lista;
        //std::map<int,double> lista2;

        std::cout<<"Lectura de archivo..."<<std::endl;

        if(lectura){
            for (std::string linea; getline(lectura,linea) ; ) {

                std::vector<string> puntajes = obtenerdatos(linea);
                
                //1,12912299,nota 1......)
                estudiante estudiante(atoi(puntajes.at(0).c_str()),std::string(puntajes.at(1)),atof(puntajes.at(2).c_str()),atof(puntajes.at(3).c_str()),atof(puntajes.at(4).c_str()),atof(puntajes.at(5).c_str()),atof(puntajes.at(6).c_str()),atof(puntajes.at(7).c_str()),atof(puntajes.at(8).c_str()),atof(puntajes.at(9).c_str()));
                double promedio=estudiante.calcularPromedio();
                
                std::string salida = std::to_string(estudiante.getId()) + ";" + estudiante.getNombre() + ";" +std::to_string(promedio);
                escritura << salida << std::endl;
                puntajes.clear();

                std::cout<<"Obtenemos el promedio"<<std::endl;
                
                /*
                lista2.insert(std::pair<int,double>(estudiante.getId(),estudiante.calcularPromedio()));
                auto it = lista2.find(2);
                std::string salida = std::to_string(it->first) + ";" + std::to_string(it->second);
                escritura << salida << std::endl;
                puntajes.clear();
                escritura << salida << std::endl;
                puntajes.clear();*/
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