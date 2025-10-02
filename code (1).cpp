/**********************
 * Автор: Дедушев П.А.*
 * Вариант: 4         *
 * ********************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){  
  double Ga = 0.9e5;
  double Re = 6.1e4;
  double W;
  
  W = 0.1;
  double A;
  A = W * pow(Re, 0.11);
  double Pe;
    
  if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
    
  W = 0.2;
  A = W * pow(Re, 0.11);
    
  if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
    
    
  W = 0.5;
  A = W * pow(Re, 0.11);
    
  if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
    
   
  W = 0.75;
  A = W * pow(Re, 0.11);
    
  if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
    
  W = 0.85;
  A = W * pow(Re, 0.11);
    
  if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
  } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
  }
  cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
    
  return 0;

}
