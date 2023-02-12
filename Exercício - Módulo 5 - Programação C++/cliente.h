#include <iostream>
using namespace std;

class Cliente{
private :
  int  IMEI;
  std::string email;  
public:  
  Cliente();
  Cliente(int IMEI, std::string email);
  string getEmail() const;
  int getIMEI() const;
};