#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long int enigma;
    string numero;

    cin >> enigma;

    numero = to_string(enigma);
    reverse(numero.begin(), numero.end());
    
    for(int i = 0; i < numero.size(); ++i) {
        cout << numero[i];
    }
    cout << "\n";

    return 0;
}