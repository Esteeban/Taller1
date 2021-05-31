#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

class estudiante
{

private:
    //Identificador
    int id;

    //nombre genérico
    std::string nombre;

    //Promedios
    double lengProm;
    double ingProm;
    double matProm;
    double cienciaProm;
    double histProm;
    double tecProm;
    double artProm;
    double edFisProm;
    

public:
    double promedio;
    double promArtistico;
    double promHumanismo;
    double promTecnico;
    /*  bool operator< (const estudiante &other) const {
            return promHumanismo > other.promHumanismo;
        }

        bool operator< (const estudiante &other) const {
            return promTecnico > other.promTecnico;
        }
        */
    //Constructores
    estudiante();
    estudiante(int id, std::string nombre, double leng, double ing, double mat, double ciencia, double hist, double tec, double art, double fis);

    //Funciones
    double calcularPromedio();
    double calcularPromArtistico();
    double calcularPromHumanismo();
    double calcularPromTecnico();

    
    


    //Getters
    int getId()
    {
        return this->id;
    }
    std::string getNombre()
    {
        return this->nombre;
    }
    double getLengProm()
    {
        return this->lengProm;
    }
    double getIngProm()
    {
        return this->ingProm;
    }
    double getMatProm()
    {
        return this->matProm;
    }
    double getCienciaProm()
    {
        return this->cienciaProm;
    }
    double getHistProm()
    {
        return this->histProm;
    }
    double getTecProm()
    {
        return this->tecProm;
    }
    double getArtProm()
    {
        return this->artProm;
    }
    double getEdFisProm()
    {
        return this->edFisProm;
    }
    
    double getPromedio()
    {
        return this->promedio;
    }
    double getPromArtistico()
    {
        return this->promArtistico;
    }
    double getPromHumanismo()
    {
        return this->promHumanismo;
    }
    double getPromTecnico()
    {
        return this->promTecnico;
    }

    //Setters
    void setId(int id)
    {
        this->id = id;
    }
    void setNombre(std::string(nombre))
    {
        this->nombre = nombre;
    }
    void setLengProm(double leng)
    {
        this->lengProm = leng;
    }
    void setIngProm(double ing)
    {
        this->ingProm = ing;
    }
    void setMatProm(double mat)
    {
        this->matProm = mat;
    }
    void setCienciaProm(double ciencia)
    {
        this->cienciaProm = ciencia;
    }
    void setHistProm(double hist)
    {
        this->histProm = hist;
    }
    void setTecProm(double tec)
    {
        this->tecProm = tec;
    }
    void setArtProm(double art)
    {
        this->artProm = art;
    }
    void setEdFisProm(double fis)
    {
        this->edFisProm = fis;
    }
    
    void setPromedio(double prom)
    {
        this->promedio = prom;
    }
    void setPromHumanismo(double prom)
    {
        this->promHumanismo = prom;
    }
    void setPromArtistico(double prom)
    {
        this->promArtistico = prom;
    }
     void setPromTecnico(double prom)
    {
        this->promTecnico = prom;
    }
};

class estudianteArtistico : public estudiante
{
private:
    double promArtistico;

public:
    estudianteArtistico();
    estudianteArtistico(int,std::string,double,double,double);
    ~estudianteArtistico(); 

    bool operator<(const estudianteArtistico &other) const
    {
        return promArtistico > other.promArtistico;
    }
    //getters
    double getPromArtistico()
    {
        return this->promArtistico;
    }
};

void maximos(std::string archivo, std::vector<estudiante> lista);
void artistico(std::string archivo, std::vector<estudiante> lista);
void humanismo(std::string archivo, std::vector<estudiante> lista);
void tecnico(std::string archivo, std::vector<estudiante> lista);

#endif //ESTUDIANTE_HPP