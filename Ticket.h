//Alessandra Hernández Bolaños A01745363 \
Carlos Josue Ceballos Arciniega A01752195

#ifndef TICKET_T
#define TICKET_T

#include "Tarjeta.h"
#include "Transaccion.h"
#include "Usuario.h"

#include <iostream>
#include <string>
using namespace std;

class Ticket{
    private:
    Tarjeta tarjeta;
    Usuario usuario;
    Transaccion transaccion;
    int numTicket;

    public:
    Ticket(){
        tarjeta= Tarjeta{};
        usuario= Usuario{};
        transaccion= Transaccion{};
        numTicket = 0;
    }
    Ticket(Usuario usuario, Transaccion transaccion, Tarjeta tarjeta, int numTicket){
        this -> tarjeta = tarjeta;
        this -> usuario = usuario;
        this -> transaccion = transaccion;
        this -> numTicket = numTicket;
    }

    Tarjeta getTarjeta(){return tarjeta;}
    Usuario getUsuario(){return usuario;}
    Transaccion getTransaccion(){return transaccion;}
    int getNumTicket(){return numTicket;}

    void setTarjeta(Tarjeta tarjeta){this -> tarjeta = tarjeta;}
    void setNotificacion(Transaccion transaccion){this -> transaccion = transaccion;}
    void setUsuario(Usuario usuario){this -> usuario = usuario;}
    void setNumTicket(int numTicket){this -> numTicket = numTicket;}

    void crearTicket(Usuario u1, Transaccion t, Tarjeta tj){
        string ticket{};
        ticket = "Nombre: " + u1.getNombre()+ "\nNum. Tarjeta: " + tj.getNumTarjeta() + "\nTransaccion realizada: " + (t.getMovRealizado());
        cout << ticket << endl; 
    }

    void enviarTicket(Usuario u){
      cout << " " << endl;
      cout << "El ticket será enviado a" + u.getCorreo() << endl; 
      cout << "Gracias por su preferencia" << endl;
    }

};//clase Ticket

#endif