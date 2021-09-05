// Vj1zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ke alocirajte kvadratnu matricu proizvoljne dimenzije . 
//Izra�unajte zbroj elemenata svakog stupca 
//Rezultat zbroja elemenata stupaca ispisati na standardni izlaz

#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int dim;
    int **matA, * niz, i, j;

    cout << "Unesite dimenzije matrice: ";
    cin >> dim;

    matA = new int*[dim];
    for (int i = 0; i < dim; i++) {
        matA[i] = new int[dim];
    }

    niz = new int[dim];

    // Operacije unosa
    printf("Unosenje elemenata matrice->");
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            matA[i][j] = rand() % 10;
    // Zbrajanje elemnata svakog stupca
    for (i = 0; i < dim; i++) {
        int suma = 0;
        for (j = 0; j < dim; j++) {
            suma = suma + matA[j][i];
        }
        niz[i] = suma;
    }
   
    cout << "Ispis matrice " << endl;
    for (int i = 0; i < dim; i++) {
        cout << "\n";
        for (int j = 0; j < dim; j++) {
            cout << matA[i][j] << ", ";
        }
    }

    cout << "\nIspis niza broja stupaca:\n " ;
    for (int i = 0; i < dim; i++) {
        cout << niz[i] << ", ";
    }

    for (int i = 0; i < dim; i++) {
        delete[] matA[i];
    }
    
    delete[] matA;
    delete[] niz;

    system("PAUSE");
    return 0;
}


