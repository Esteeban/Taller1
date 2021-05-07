class estudiante{
    
    private:
        //Identificador  
        int id; 
        
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
        estudiante(int id, double leng, double ing, double mat, double ciencia, double hist, double tec, double art, double fis);
        
        //Funciones
        double calcularPromedio();

        //Getters
        int getId ()
        {
            return this->id;
        }
        //Setters

       

};