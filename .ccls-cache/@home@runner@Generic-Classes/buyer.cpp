#include <iostream>
#include <string>
#include "user.h"
#include "buyer.h"

std::string tarjeta;
int Buyer::b_count=0;
bool bought;

Buyer::Buyer(){
  tarjeta = "";
  setID(++b_count);
  bought = false;
}

Buyer::~Buyer(){std::cout<<"Destructor BYEr ;)"<<std::endl;}

//Sets y gets
void Buyer::setTarjeta(std::string tarjeta){this->tarjeta = tarjeta;}
void Buyer::setBought(bool bought){this->bought=bought;}

std::string Buyer::getTarjeta(){return tarjeta;}
bool Buyer::getBought(){return bought;}

//Funcion crear cliente
void Buyer::createBuyer(){
  obtenerDatos();
  do{
    std::cout<<"Escribe los 10 digitos de tu tarjeta: "<<std::endl;
    getline(std::cin,tarjeta);
    if(tarjeta.size()!=10){std::cout<<"No escribiste 10 digitos"<<" Escribiste: "<<tarjeta.size()<<" digitos. "<<tarjeta<<std::endl;}
  }while(tarjeta.size()!=10);
}

void Buyer::buyerData(){
  std::cout<<"Nombre: "<<getNombre()<<std::endl;
  std::cout<<"Telefono: "<<getTelefono()<<std::endl;
  std::cout<<"Direccion: "<<getDireccion()<<std::endl;
  std::cout<<"ID: "<<getID()<<std::endl;
  std::cout<<"Tarjeta: "<< getTarjeta()<<std::endl;
}

bool Buyer::buy(){
  int buy = 0;
  do
  {std::cout<<"Do you wanna buy? Yes(1) No(2) "<<std::endl;
  std::cin>>buy; std::cout<<std::endl;
  if(buy!=1&&buy!=2){std::cout<<"Give me valid answer"<<std::endl;}
  }while(buy!=1&&buy!=2);
  if(buy==1){
    std::cout<<"You bought"<<std::endl;
    setBought(true);
            }
  if(buy==2){std::cout<<"You didn't buy"<<std::endl;}
  return getBought();
}




