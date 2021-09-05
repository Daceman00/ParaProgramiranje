// Vj1zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// //Dinami?ki alocirati 3 niza. Veli?inu nizova unijeti preko konzole
// Unijeti preko rand() funkcije elemente u nizA i nizB te ih zbrojiti u nizC
// Ispisati elemente rezultatnog niza

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // deklaracija nizova
    int* nizA, * nizB, * nizC, n;

    srand(time(NULL));

    cout << "Unesite broj elemenata niza: " << endl;
    cin >> n;

    // alokacija nizova

    nizA = new int[n];
    nizB = new int[n];
    nizC = new int[n];

    // Unos vrijednosti elemenata

    for (int i = 0; i < n; i++) {
        nizA[i] = rand() % 50;
        nizB[i] = rand() % 50;
    }

    // zbrajanje
    for (int i = 0; i < n; i++) {
        nizC[i] = nizA[i] + nizB[i];
    }

    cout << "Ispis nizA: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nizA[i] << " ";
    }

    cout << "Ispis nizB: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nizB[i] << " ";
    }

    // Ispisivanje zbroja

    cout << "/nIspis zbroja: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nizC[i] << " ";
    }

    delete[] nizA;
    delete[] nizB;
    delete[] nizC;

    system("PAUSE");

    return 0;
    
}


