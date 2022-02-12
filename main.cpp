/*
Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura inferior a 15°C nem superior a 40°c. As temperaturas verificadas em cada dia estão disponíveis em uma unidade de entrada de dados. Fazer um algoritmo que calcule e imprima:
A menor temperatura ocorrida;
A maior temperatura ocorrida;
A temperatura média;
O número de dias nos quais a temperatura foi inferior à temperatura média.
*/

#include <iostream>
using namespace std;

const int TOTAL_DIAS = 5; // valor original 121;

int main() {
    float temp[TOTAL_DIAS], maiorTemp, menorTemp, somaTemp, tempMedia;
    int diasInfMedia, cont;
    cout << "Estatistica de temperaturas de uma cidade do interior ---\n";
// Leitura do vetor de temperatura
// foi considerado que todos os valores digitados para a
// temperatura dentro do intervalo 15oC e 40oC
    for (cont = 0; cont < TOTAL_DIAS; cont++) {
        cout << cont + 1 << "A temperatura: ";
        cin >> temp[cont];
    }

    // Encontra a menor e a maior temperatura
    maiorTemp = temp[0];
    menorTemp = temp[0];
    for (cont = 1; cont < TOTAL_DIAS; cont++) {
        if (temp[cont] > maiorTemp)
            maiorTemp = temp[cont];
        else
            menorTemp = temp[cont];
    }

    // Calcula a média das temperaturas
    somaTemp = 0;
    for(cont = 0; cont < TOTAL_DIAS; cont++){
        somaTemp = somaTemp + temp[cont];
        tempMedia = somaTemp / TOTAL_DIAS;
    }

    // Verifica quantos dias a temperatura foi inferior a média
    diasInfMedia = 0;
    for(cont = 0; cont < TOTAL_DIAS; cont++) {
        if(temp[cont] < tempMedia)
            diasInfMedia++;
    }

    // Apresenta os resultados obtidos
    cout << "------------------------------------\n";
    cout << "Menor Temperatura: " << menorTemp << endl;
    cout << "Maior Temperatura: " << maiorTemp << endl;
    cout << "Temperatura Media: " << tempMedia << endl;
    cout << "Dias inferiores e media: " << diasInfMedia << endl;

    float digiteTemp, contIguais;
    cout << "Digite uma temperatura para comparar: ";
    cin >> digiteTemp;

    contIguais = 0;

    for(cont = 0; cont < TOTAL_DIAS; cont++){
        if (temp[cont] == digiteTemp) contIguais++;
    }
    if (contIguais == 1)
        cout << "Ha apenas uma temperatura igual a: " << digiteTemp;
    else if (contIguais > 1)
        cout << "Ha " << contIguais << " temperatura iguais a " << digiteTemp;
    else
        cout << "nao a nenhuma temperatura igual a: " << digiteTemp;
}

/*
Algoritmo VerificacaoTemperatura
início
        constante inteiro TOTAL_DIAS = 121;
real temp[TOTAL_DIAS], maiorTemp, menorTemp, somaTemp, tempMedia;
inteiro diasInfMedia, cont;

// Leitura do vetor de temperatura
// foi considerado que todos os valores digitados para a
// temperatura dentro do intervalo 15oC e 40oC
para(cont ← 0; cont < TOTAL_DIAS; cont++)
leia(temp[cont]);

// Encontra a menor e a maior temperatura
maiorTemp ← temp[0];
menorTemp ← temp[0];
para(cont ← 1; cont < TOTAL_DIAS; cont++)
se (temp[cont] > maiorTemp) então
        maiorTemp ← temp[cont];
senão se (temp[cont] < menorTemp) então
        menorTemp ← temp[cont];

// Calcula a média das temperaturas
somaTemp ← 0;
para(cont ← 0; cont < TOTAL_DIAS; cont++)
somaTemp ← somaTemp + temp[cont];
mediaTemp ← somaTemp / TOTAL_DIAS;

// Verifica quantos dias a temperatura foi inferior a média
diasInfMedia ← 0;
para(cont ← 0; cont < TOTAL_DIAS; cont++)
se (temp[cont] < tempMedia) então
        diasInfMedia++;

// Apresenta os resultados obtidos
escreva(menorTemp, maiorTemp, tempMedia, diasInfMedia);
fim
*/