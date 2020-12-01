#ifndef TARJETA_T
#define TARJETA_T


#include <iostream>
#include <string>
using namespace std;

class Tarjeta{
    private:
        string nombre;
        string numTarjeta;
        double fechaVencimiento;
        int cvv;
    public:
        Tarjeta(){}

        Tarjeta(string nombre, string numTarjeta, double fechaVencimiento, int cvv){
            this -> nombre = nombre;
            this -> numTarjeta = numTarjeta;
            this -> fechaVencimiento = fechaVencimiento;
            this -> cvv = cvv;
        }

        string getNombre(){return nombre;}
        string getNumTarjeta(){return numTarjeta;}
        double getFechaVencimiento(){return fechaVencimiento;}
        int getCvv(){return cvv;}

        void setNombre(string nombre){this->nombre = nombre;}
        void setNumTarjeta(string
       numTarjeta){this->numTarjeta = numTarjeta;}
        void setFechaVencimiento(double fechaVencimiento){this->fechaVencimiento = fechaVencimiento;}
        void setCvv(int cvv){this->cvv = cvv;}

        void pedirNombre(string nombre){
            this -> nombre = nombre;
        }

        void pedirNumTarjeta(string numTarjeta){
            this -> numTarjeta = numTarjeta;  
        }

        void pedirFechaVenc(double fechaVencimiento){
            this -> fechaVencimiento = fechaVencimiento;
        }

        void pedirCvv(int cvv){
            this -> cvv = cvv;
        }
};

#endif