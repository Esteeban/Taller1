#include <string>
#include <string.h>
#include "estudiante.hpp"

estudiante::estudiante()
{

};

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
};

double estudiante::calcularPromedio()
{
    double prom = (this->lengProm+this->ingProm+this->matProm+this->cienciaProm+this->histProm+this->tecProm+this->artProm+this->edFisProm)/8.0; //promedio de notas
    

    return prom;

}



