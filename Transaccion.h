//Alessandra Hernández Bolaños A01745363 \
Carlos Josue Ceballos Arciniega A01752195

#ifndef TRANSACCION_T
#define TRANSACCION_T

#include "Nip.h"

#include <iostream>
#include <string>
using namespace std;

class Transaccion{
    private: 
    int nip;
    string movRealizado;
    int monto;
    Nip nip1;

    public:
    Transaccion(){
        nip = 000;
        movRealizado = " ";
        monto = 000;
        nip1 = Nip{};
    }

    Transaccion(int nip, string movRealizado, int monto, Nip nip1){
        this -> nip = nip;
        this -> movRealizado = movRealizado;
        this -> monto = monto;
        this -> nip1 = nip1;
    }
     
      int getNip(){return nip;}
      string getMovRealizado(){return movRealizado;}
      int getMonto(){return monto;}
      Nip getNip1(){return nip1;}

      void setNip(int nip){this -> nip = nip;}        
      void setMovRealizado(string movRealizado){this -> movRealizado = movRealizado;}
      void setMonto(int monto){this -> monto = monto;}
    
      void pedirNip(int nip, int np1){
          if(nip != (np1)){
            cout << " " << endl;
            cout << "--- NIP INCORRECTO, TRANSACCION NO AUTORIZADA" << endl;
            exit(1);
          }
          if (nip == (np1)){
            this -> nip = nip;
          }
        }

      void movimientoRealizado(string movRealizado){
        this -> movRealizado = movRealizado; 
        while (movRealizado != "a" && movRealizado != "b" && movRealizado != "c" ){
          cout << "Opcion invalida, que movimiento quiere realizar?: "; cin >> movRealizado;
          this -> movRealizado = movRealizado; 
        }
          if (movRealizado == "a"){
              movRealizado = "Deposito";
              this -> movRealizado = movRealizado;
          }
          if (movRealizado == "b"){
            movRealizado = "Pago";
            this -> movRealizado = movRealizado; 
          }

          if (movRealizado == "c"){
            movRealizado = "Retiro";
            this -> movRealizado = movRealizado;
          }  
      }

     void pedirMonto(int monto){
        this -> monto = monto;
      }
};
#endif

