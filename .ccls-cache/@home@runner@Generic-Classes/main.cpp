#include <iostream>
#include "buyer.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Buyer buyer1;
  //buyer1.createBuyer();
  //buyer1.buyerData();
  buyer1.buy();
  cout<<endl<<buyer1.getBought()<<endl;
}