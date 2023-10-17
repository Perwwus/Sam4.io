#include <iostream>
#include <math.h>
using namespace std;
int main() {
  double x, r, u, z=0;
  int k=1;
  cout <<"Введіть значення х: "; cin >> x;
  cout <<"\nРезультати: \n";
  u=-(x/24);
  z=u;
  cout <<"Доданок " << k << ": " << u << endl;
  do
    {
      k++;
      r=(x*x-k*x*x)/(k*k+3*k);
      u*=r;
      cout <<"Доданок " << k << ": " << u << endl;
      z+=u;
    }
    while (fabs(u)>=1e-4);
  cout <<"Сума = " << z << endl;
  cout <<"Кількість доданків = " << k << endl;
  return 0;
}