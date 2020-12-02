#ifndef NOTIFICACION_N
#define NOTIFICACION_N

#include "Usuario.h"
#include "Transaccion.h"
#include "Tarjeta.h"

#include <iostream>
#include <string>
using namespace std;

class Notificacion{
  private:
    Usuario usuario;
    Transaccion transaccion;
    Tarjeta tarjeta;
  public:
    Notificacion(){
      usuario = Usuario{};
      transaccion = Transaccion{};
      tarjeta = Tarjeta{};
    }
    Notificacion(Usuario usuario, Transaccion transaccion, Tarjeta tarjeta){
      this -> usuario = usuario;
      this -> transaccion = transaccion;
      this -> tarjeta = tarjeta;
    }

    Usuario getUsuario(){return usuario;}
    Transaccion getTransaccion(){return transaccion;}
    Tarjeta getTarjeta(){return tarjeta;}

    void setNotificacion(Transaccion transaccion){this -> transaccion = transaccion;}
    void setUsuario(Usuario usuario){this -> usuario = usuario;}
    void setTarjet(Tarjeta tarjeta){this -> tarjeta = tarjeta;}

    void crearNotificacion(Usuario u,Transaccion t, Tarjeta tj){
      string noti{};
      noti = "- Estimado(a) " + u.getNombre() + ":\n" + "Hemos detectado el siguiente movimiento: " + t.getMovRealizado() + ", por un monto de $" + to_string(t.getMonto()) + " realizado con su tarjeta con número " + tj.getNumTarjeta();
      cout<< noti <<endl;
    }
    void enviarNotificacion(Usuario u){
      string notif{};
      notif = "\nLa notificacion ha sido enviada al siguiente correo: " + u.getCorreo();
      cout << notif << endl;
    }
    void confirmarTrans(int conf){
    switch (conf){
      case 1: cout << "\nGracias por confirmar";
      break;
      case 0: cout << "\nMovimiento cancelado, notifique a su proveedor de servicio" << endl;
      exit(1);
      break;
      default: cout << "\nOpción inválida, movimiento cancelado" << endl;
      exit(1);
    }
    //system("PAUSE");
    }
};

#endif