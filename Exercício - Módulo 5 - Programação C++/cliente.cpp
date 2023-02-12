#include "cliente.h"

Cliente::Cliente(){
  this->IMEI   = -1;
  this->email = email;
};  
Cliente::Cliente(int IMEI, std::string email){
  this->IMEI    = IMEI;
  this->email  = email;
}
string Cliente::getEmail() const {
  return email;
}
int Cliente::getIMEI() const{
  return IMEI;
}