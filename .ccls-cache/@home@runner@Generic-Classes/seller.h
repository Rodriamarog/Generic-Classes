#ifndef SELLER_H_
#define SELLER_H_
#include <iostream>
#include <string>
#include "user.h"
class Seller : public User{
private:
std::string company;
static int s_count;
bool sold;

public:
Seller();
virtual ~Seller();

//Sets y gets
void setCompany(std::string);
void setSold(bool);

std::string getCompany();
bool getSold();


//Funcion crear cliente
void createSeller();
void buyerData();
bool buy();

};
#endif