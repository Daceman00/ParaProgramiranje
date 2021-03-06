// Vj1zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ke alocirajte kvadratnu matricu, ali preko niza elemenata.
//Izra�unajte zbroj elemenata svakog stupca 
//Rezultat zbroja elemenata stupaca ispisati na standardni izlaz

#include <iostream>
using namespace std;

int main()
{
    int dim;
    int *matA, *niz, i, j;

    cout << "Unesite dimenzije matrice: ";
    cin >> dim;

    matA = new int[dim * dim]; // alociramo matricu preko niza
    niz = new int[dim];

    // Operacije unosa
    printf("Unosenje elemenata matrice: ");
    for (i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matA[i * dim + j] = rand() % 10;
        }
        for (i = 0; i < dim; i++) {
            int suma = 0;
            for (int j = 0; j < dim; j++) {
                suma = suma + matA[j * dim + i];
            }
            niz[i] = suma;
    }
        cout << "Ispis matrice: " << endl;
        for (int i = 0; i < dim; i++) {
            cout << "\n";
            for (int j = 0; j < dim; j++) {
                cout << matA[i * dim + j]<<" ";
            }
            cout << "\nIspis niza broja stupaca:\n";
            for (int i = 0; i < dim; i++) {
                cout << niz[i] << ", ";
            }
        }
        delete[] matA;
        delete[] niz;

        system("PAUSE");
        return 0;

}

}
