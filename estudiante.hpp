#include <string.h>
class estudiante{
    
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
        
        
        //Constructores
        estudiante();
        estudiante(int id, std::string nombre, double leng, double ing, double mat, double ciencia, double hist, double tec, double art, double fis);
        
        //Funciones
        double calcularPromedio();

        //Getters
        int getId ()
        {
            return this->id;
        }

        std::string getNombre(){
            return this->nombre;
        }
        //Setters

       

};