//Alessandra Hernández Bolaños A01745363 \
Carlos Josue Ceballos Arciniega A01752195

#include "Usuario.h"
#include "Tarjeta.h"
#include "Transaccion.h"
#include "Ticket.h"
#include "Notificacion.h"
#include "Nip.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Prueba usuario y Tarjeta
    Usuario u{"Alessandra", "alessandradehca14@hotmail.com", Tarjeta {"Ale","55678954", 09.25,1234}, "5521141796", "hola"};
    
    //Prueba get
    cout << u.getNombre() << endl;
    cout<< u.getContrasena()<<endl;
    cout<<u.getTelefono()<<endl;
    cout <<u.getCorreo()<<endl;
    //Prueba getTarjeta
    cout<<"****Prueba get Datos de tarjeta"<<endl;
    cout<<"Nombre de usuario tarjeta: "+ u.getTarjeta().getNombre()<<endl;
    cout<<"CVV de tarjeta"+ to_string(u.getTarjeta().getCvv())<<endl;
    cout<<"Fecha de vencimiento de tarjeta: "+to_string(u.getTarjeta().getFechaVencimiento())<<endl;
    cout<<"Numero de tarjeta:"+u.getTarjeta().getNumTarjeta()<<endl;
    //Prueba set
    cout<<"****Prueba set"<<endl;
    u.setNombre("Carlos");
    cout<<u.getNombre()<<endl;

    //Prueba transaccion
    cout << "****Prueba get y set"<<endl;
    Transaccion Tran1n{};
    Tran1n.setMonto(1254);
    Tran1n.setMovRealizado("Pago");
    Tran1n.setNip(2345);
    cout << Tran1n.getMonto() << endl;
    cout << Tran1n.getMovRealizado() << endl;
    cout << Tran1n.getNip() << endl;

    //Prueba Notificacion
    Notificacion noti;
    noti.crearNotificacion(u,Tran1n,Tarjeta {"Ale","55678954", 09.25,1234});

    //Pruba Ticket
    Ticket tick;
    tick.crearTicket(u, Tran1n, Tarjeta {"Ale","55678954", 09.25,1234});

    //Prueba Nip
    Nip np;
    cout << "Nip aleatorio: " + to_string(np.crearNipAle()) << endl;
    return 0;
}
