/**********************
 * Автор: Дедушев П.А.*
 * Вариант: 4         *
 * ********************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {  
  double Ga = 0.9e5;
  double Re = 6.1e4;
  
  int count;
  cout << " Enter count W: ";
  cin  >> count;
  
  for (int studentIndex = 0; studentIndex < count; ++studentIndex) {
      double W;
      
      cout << " Enter count W [" << studentIndex+1 << "] (from 0 to 1): ";
      cin  >> W;
      
      double A;
      A = W * pow(Re, 0.11);
      
      double Pe;
      if (A < 1) {
          Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
      } else {
          Pe = 2.25e-3 * pow(A, -3.3) * pow(Ga, 0.29);
      }
      cout << "W = " << W << ", A = " << A << ", Pe = " << Pe << endl;
 }
  return 0;
}

