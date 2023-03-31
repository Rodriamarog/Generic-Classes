#ifndef BUYER_H_
#define BUYER_H_
#include <iostream>
#include <string>
#include "user.h"
class Buyer : public User{
private:
std::string tarjeta;
static int b_count;
bool bought;

public:
Buyer();
virtual ~Buyer();

//Sets y gets
void setTarjeta(std::string);
void setBought(bool);

std::string getTarjeta();
bool getBought();


//Funcion crear cliente
void createBuyer();
void buyerData();
bool buy();

};
#endif