#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

#include "funciones.h"
#include "estudiante.hpp"

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

std::vector<std::string> obtenerdatos(std::string linea){
    std::vector<std::string> arreglo;
    std::stringstream reem(linea);
    std::string item;
    
    std::string comilla="\"";
    std::string nada="";
    while(getline(reem,item,';')){
        std::string dato=item;
        int pos=dato.find(comilla);
        while(pos != -1){
            dato.replace(pos,comilla.size(),nada);
            pos=dato.find(comilla,pos+nada.size());     
        }
        arreglo.push_back(dato);
    }
    return arreglo;
}

/**
 * @param estudiante &a
 * @param estudiante $b
 * @return Promedios ordenados descendentemente
 */
bool ordenarPorPromedio(const estudiante &a, const estudiante &b)
{
    return a.promedio > b.promedio;
}

/**
 * @param estudiante &a
 * @param estudiante $b
 * @return Promedios para Artisticos ordenados descendentemente
 */
bool ordenarPorPromedioArtistico(const estudiante &a, const estudiante &b)
{
    return a.promArtistico > b.promArtistico;
}

/**
 * @param estudiante &a
 * @param estudiante $b
 * @return Promedios para Humanistaordenados descendentemente
 */
bool ordenarPorPromedioHumanista(const estudiante &a, const estudiante &b)
{
        return a.promHumanismo > b.promHumanismo;
}

/**
 * @param estudiante &a
 * @param estudiante $b
 * @return Promedios para Tecnicos ordenados descendentemente
 */
bool ordenarPorPromedioTecnico(const estudiante &a, const estudiante &b)
{
    return a.promTecnico > b.promTecnico;
}
