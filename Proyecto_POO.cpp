#include "Usuario.h"
#include "Tarjeta.h"
#include "Transaccion.h"
#include "Ticket.h"
#include "Notificacion.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << " " << endl;
    cout << "********* BIENVENIDO *********" << endl;
    cout << " " << endl;
    cout << "--- CREE SU CUENTA" << endl;
    cout << " " << endl;
    
    Usuario u1{};
      string nombre{};
      string correo{};
      string telefono{};
      string contrasena{};
      cout << "Nombre (use guion bajo como espacio): "; cin >> nombre;
      u1.pedirNombre(nombre);
      cout << "Correo: "; cin >> correo;
      u1.pedirCorreo(correo);
      cout << "Telefono: "; cin >> telefono;
      u1.pedirTelefono(telefono);
      cout << "Contrasena: "; cin >> contrasena;
      u1.pedirContrasena(contrasena);
      cout << " " << endl;
      cout << "--- AHORA, INGRESE LOS DATOS DE SU TARJETA" << endl;
      cout << " " << endl;

    Tarjeta tj1{};
      string numTarjeta{};
      double fechaVencimiento{};
      int cvv{};
      cout << "Nombre (use guion bajo como espacio): "; cin >> nombre;
      tj1.pedirNombre(nombre);
      cout << "Numero de tarjeta: "; cin >> numTarjeta;
      tj1.pedirNumTarjeta(numTarjeta);
      cout << "Fecha de vencimiento (formato mes.ano): "; cin >> fechaVencimiento;
      tj1.pedirFechaVenc(fechaVencimiento);
      cout << "CVV: "; cin >> cvv;
      tj1.pedirCvv(cvv);

    Nip np1{};
      int nipal{};
      int alt{};
      alt = np1.crearNipAle();
      cout << " " << endl;
      cout << "--- NIP DE SEGURIDAD" << endl;
      cout << "(un solo uso)" << endl;
      cout << " " << endl;
      cout << "Mensaje de texto: Estimado cliente, este es su NIP de seguridad: " + to_string(alt) << endl;

    Transaccion t1{};
      int nip{};
      string movRealizado{};
      int monto{};
      cout << " " << endl;
      cout << "--- REALICE SU TRANSACCION" << endl;
      cout << " " << endl;
      cout << "Se le envio un NIP vía SMS" << endl;
      cout << "Digite el NIP que le fue enviado: "; cin >> nip;
      t1.pedirNip(nip,alt);
      cout << "Movimientos que se pueden realizar: " << endl;
      cout << "(a) Deposito" << endl;
      cout << "(b) Pago" << endl;      
      cout << "(c) Retiro" << endl;
      cout << "Que movimiento quiere realizar?: "; cin >> movRealizado;
      t1.movimientoRealizado(movRealizado);
      cout << "Ingrese el monto: "; cin >> monto;
      t1.pedirMonto(monto);
    
    Notificacion n1{};
    int conf{};
      cout << " " << endl;
      cout << "--- NOTIFICACION DE MOVIMIENTO:" << endl;
      n1.crearNotificacion(u1,t1,tj1);
      cout << "-Por favor, teclee 1 si ha sido usted e ignore el mensaje, en caso que no, teclee 0: " ; cin >> conf;
      n1.confirmarTrans(conf);
      n1.enviarNotificacion(u1);

    Ticket tc1{};
      cout << " " << endl;
      cout << "--- GENERACION DE TICKET" << endl;
      cout << "RESUMEN DE TRANSACCION PREVIAMENTE AUTORIZADA" << endl;
      tc1.setNumTicket(1);
      cout << "Ticket No. " + to_string(tc1.getNumTicket()) << endl;
      tc1.crearTicket(u1,t1,tj1); //tj

    return 0;
}