#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>

#include "estudiante.hpp"

using namespace std;

estudiante::estudiante()
{

}

estudiante::estudiante(int id, std::string nombre, double leng, double ing, double mat, double ciencia, double hist, double tec, double art, double fis)
{
    this->id = id;
    this->nombre = nombre;
    this->lengProm=leng;
    this->ingProm=ing;
    this->matProm=mat;
    this->cienciaProm=ciencia;
    this->histProm=hist;
    this->tecProm=tec;
    this->artProm=art;
    this->edFisProm=fis;
}



double estudiante::calcularPromedio()
{
    double prom = (this->lengProm+this->ingProm+this->matProm+this->cienciaProm+this->histProm+this->tecProm+this->artProm+this->edFisProm)/8.0; //promedio de notas
    return prom;
 
}
double estudiante::calcularPromArtistico()
{
    double prom = (this->artProm+this->edFisProm)/2.0;
    return prom;
}

double estudiante::calcularPromHumanismo()
{
    double prom = (this->lengProm+this->histProm)/2.0;
    return prom;
}

double estudiante::calcularPromTecnico()
{
    double prom = (this->cienciaProm+this->matProm+this->tecProm)/3.0;
    return prom;
}

void maximos(std::string archivo,std::vector<estudiante> lista){
    
    std::ifstream lectura(archivo);
    std::ofstream maximos("maximos.csv");
    if(lectura){
        for(int i=0 ; i<100 ; i++){
            std::string salida = std::to_string(lista.at(i).getId())+ ";" + lista.at(i).getNombre()+ ";" + std::to_string(lista.at(i).getPromedio());
            maximos << salida << std::endl;      
        }  
    }
}

void artistico(std::string archivo,std::vector<estudiante> lista){
    std::ifstream lectura(archivo);
    std::ofstream artistico("artistico.csv");
    
    if (lectura){
        for(int i=0;i<100;i++){
            std::string salida = std::to_string(lista.at(i).getId())+ ";" + lista.at(i).getNombre()+ ";" + std::to_string(lista.at(i).getPromArtistico());
            artistico << salida << std::endl;
        }
    }
}

void humanismo(std::string archivo,std::vector<estudiante> lista){
    std::ifstream lectura(archivo);
    std::ofstream artistico("humanismo.csv");

    if (lectura){
        for(int i=0;i<100;i++){
        std::string salida = std::to_string(lista.at(i).getId())+ ";" + lista.at(i).getNombre()+ ";" + std::to_string(lista.at(i).getPromHumanismo());
        artistico << salida << std::endl;
        }
    }
}

void tecnico(std::string archivo,std::vector<estudiante> lista){
    std::ifstream lectura(archivo);
    std::ofstream artistico("tecnicos.csv");

    if (lectura){
         for(int i=0;i<100;i++){
            std::string salida = std::to_string(lista.at(i).getId())+ ";" + lista.at(i).getNombre()+ ";" + std::to_string(lista.at(i).getPromTecnico());
            artistico << salida << std::endl;
        }
    } 
}




