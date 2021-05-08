#include <string.h>
#include <vector>

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
        double promedio;


    public:
        
        bool operator< (const estudiante &other) const {
            return promedio > other.promedio;
        }
        
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

        //Setters
        void setId (int id)
        {
            this->id = id;
        }
        void setNombre(std::string(nombre)){
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
       

};

void maximos(std::string archivo,std::vector<estudiante> lista);