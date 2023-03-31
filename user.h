#ifndef USER_H_
#define USER_H_
#include <iostream>
#include <string>
// User class
class User {
private:
  std::string nombre;
  int ID;
  std::string telefono;
  std::string direccion;

public:
  // Constructor y Destructor
  void obtenerDatos();
  User();
  ~User();

  // Setters y getters
  void setNombre(std::string);
  void setID(int);
  void setTelefono(std::string);
  void setDireccion(std::string);

  std::string getNombre() const;
  std::string getTelefono() const;
  std::string getDireccion() const;
  int getID() const;
};
#endif