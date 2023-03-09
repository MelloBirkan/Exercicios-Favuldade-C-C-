#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    const double mediaGas = 12.0;
    int tempo, velMedia = 0;
    double litrosNecessarios, distancia = 0;
    
    cin >> tempo >> velMedia;
    distancia = (velMedia * tempo);
    litrosNecessarios = distancia/mediaGas;
    
    cout << fixed << setprecision(3) << litrosNecessarios << "\n";
    return 0;
}