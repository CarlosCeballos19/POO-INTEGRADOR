//Alessandra Hernández Bolaños A01745363 \
Carlos Josue Ceballos Arciniega A01752195

#ifndef NIP_NP
#define NIP_NP

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Nip{
  private:
  int nip1;

  public:
  Nip(){
    nip1 = 0;
  };

  Nip(int nip1){
    this -> nip1 = nip1;
  }

  int getNip1(){return nip1;}

  void setNip1(int nip1){this -> nip1 = nip1;}
  
  int crearNipAle(){
    int nipal{};      
    srand(time(NULL));
    nipal = rand()%(9999-1000);
    return nipal;
    }
  

};

#endif