#ifndef USUARIO_U
#define USUARIO_U

#include "Tarjeta.h"
#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private:
        string nombre;
        string correo;
        string telefono;
        string contrasena;
        Tarjeta tarjeta;
    public:
        Usuario(){
            nombre = "";
            correo = "xxxxxx@xxxx.com";
            telefono = "0000000000";
            contrasena = "xddxdcdxd";
            tarjeta = Tarjeta{};
        }

        Usuario(string nombre, string correo, Tarjeta tarjeta, string telefono, string contrasena){
            this -> nombre = nombre;
            this -> correo = correo;
            this -> telefono = telefono;
            this -> contrasena = contrasena;
            this -> tarjeta = tarjeta;
        }
        
        
        Tarjeta getTarjeta(){return tarjeta;}
        string getNombre(){return nombre;}
        string getCorreo(){return correo;}
        string getTelefono(){return telefono;}
        string getContrasena(){return contrasena;}



        void setNombre(string nombre){this->nombre = nombre;}
        void setCorreo(string correo){this->correo = correo;}
        void setTelefono(string telefono){this->telefono = telefono;}
        void setContrasena(string contrasena){this->contrasena = contrasena;}
        void setTarjeta(Tarjeta tarjeta){this-> tarjeta = tarjeta;}
        
        void pedirNombre(string nombre){
            this -> nombre = nombre;
        }

        void pedirCorreo(string correo){
            this -> correo = correo;
        }

        void pedirTelefono(string telefono){
            this -> telefono = telefono;
        }

        void pedirContrasena(string contrasena){
            this -> contrasena = contrasena;
        }
};

#endif