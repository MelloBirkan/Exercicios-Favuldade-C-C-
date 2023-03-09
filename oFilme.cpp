#include <iomanip>
#include <iostream>


using namespace std;

int main() {
  double a, b, porcentagemAumentada;

  cin >> a >> b;
  porcentagemAumentada = (b - a) / a * 100;

  cout << fixed << setprecision(2) << porcentagemAumentada << "%" << "\n";

  return 0;
}