#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <vector>
#include <string>

void saludo();
void integrantes();
std::vector<std::string> obtenerdatos(std::string linea);
std::map<int,double> listaPromedios(std::vector<estudiante>);

#endif