#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>

#include "funciones.h"
using namespace std;

/**
 * Funciones
 */

void saludo(){
    std::cout<<"==========================================="<<std::endl;
    std::cout<<"Taller 1 Computación Paralela y Distribuída"<<std::endl;
    std::cout<<"==========================================="<<std::endl;
    std::cout<<std::endl<<std::endl;
}

void integrantes(){
    std::cout<<"=================="<<std::endl;
    std::cout<<"Integrantes:"<<std::endl;
    std::cout<<"-Alan Slazak"<<std::endl;
    std::cout<<"-Esteban Rojas"<<std::endl;
    std::cout<<"=================="<<std::endl;
}

double promediar(std::vector<int> puntajes){
    double promedio = 0.0;
    if(puntajes.size() >= 6){
        promedio=(puntajes.at(2)+puntajes.at(3)+puntajes.at(4)+puntajes.at(5)+puntajes.at(6)+puntajes.at(7)+puntajes.at(8)+puntajes.at(9)+puntajes.at(10) )/ 8.0;
    }
    return promedio;
}

std::vector<int> obtenerdatos(std::string linea){
    std::vector<int> arreglo;
    std::stringstream reem(linea);
    std::string item;

    while(getline(reem,item,';')){
        int valor = atoi(item.c_str());
        arreglo.push_back(valor);
    }
    return arreglo;
}