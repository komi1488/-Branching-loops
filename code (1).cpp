/**********************
 * Автор: Дедушев П.А.*
 * Вариант: 4         *
 * ********************/
#include <iostream>
#include <string>
#include <cmath>


int main(){  
  double Ga = 0.9e5;
  double Re = 6.1e4;
  double W_values[] = {0.1, 0.2, 0.5, 0.75, 0.85};
  int Num_W = sizeof(W_values) / sizeof(W_values[0]);
  
  for(int i = 0; i < Num_W; ++i) {
    double W = W_values[i];
    double A = W * pow(Re, 0.11);
    double Pe;
    
    if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
    } else {
      Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
    }
    std::cout << "W = " << W << ", A " << A << ", Pe = " << Pe << std::endl;
  }
    
  return 0; 
}