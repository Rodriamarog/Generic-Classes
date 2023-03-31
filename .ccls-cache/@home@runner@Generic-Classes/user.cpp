#include <iostream>
#include <string>
#include "user.h"

//Private variables
std::string nombre;
int ID;
std::string telefono;
std::string direccion;

//Funcion para obtener datos
void User::obtenerDatos(){
  std::cout<<"Dime tu nombre: "<<std::endl;
  getline(std::cin,nombre);
  do{
  std::cout<<"Dime tu telefono: "<<std::endl;
  getline(std::cin,telefono);
  if(telefono.size()!=10){std::cout<<"El telefono debe tener 10 digitios exactamente."<<std::endl;}
  }while(telefono.size()!=10);
  std::cout<<"Dime tu direccion: "<<std::endl;
  getline(std::cin,direccion);
}

//Constructor y Destructor
User::User(){
  nombre = "";
  ID = 0;
  telefono = "";
  direccion = "";
}
User::~User(){std::cout<<"Destructor de User"<<std::endl;}

//Setters y getters
void User::setNombre(std::string nombre){this->nombre=nombre;}
void User::setID(int ID){this->ID=ID;}
void User::setTelefono(std::string telefono){this->telefono=telefono;}
void User::setDireccion(std::string direccion){this->direccion=direccion;}

std::string User::getNombre() const{return nombre;} 
std::string User::getTelefono() const{return telefono;} 
std::string User::getDireccion() const{return direccion;} 
int User::getID() const{return ID;}

