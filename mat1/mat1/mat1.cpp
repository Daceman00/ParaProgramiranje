// mat1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ki locirajte  matricu proizvoljne dimenzije . 
//Izraunajte zbroj elemenata svakog stupca 
//Rezultat zbroja elemenata stupaca ispisati na ekran
//Napi�ite funkciju za ispis matrice i niza slijede�eg prototipa
//void ispisMat(int **mat, int size)
//void ispisNiz(int *niz, int size)

#include <iostream>
using namespace std;

void ispisMat(int** mat, int nRed, int nStup) {
    int i, j;
    for (i = 0; i < nRed; i++) {
        cout << endl;
        for (j = 0; j < nStup; j++) {
            cout << mat[i][j] << ", ";
        }
    }
}

void ispisMat(int** mat, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        cout << endl;
        for (j = 0; j < size; j++) {
            cout << mat[i][j] << ", ";
        }
    }
}

void ispisiNiz(int* niz, int size) {
    int j;
    cout << "\n\n";
    for (j = 0; j < size; j++) {
        cout << niz[j] << ", ";
    }
}

int sumStup(int** mat, int* niz, int nRed, int nStup) {
    int i, j;

    if (nRed <= 0 || nStup <= 0)
        return 1;
        
    for (j = 0; j < nStup; j++) {
        niz[j] = 0;
        for (i = 0; i < nRed; i++) {
            niz[j] = niz[j] + mat[i][j];
        }
    }
    return 0;
}

int main()
{
    int **matA, i, j, nRed, nStup;
    int *niz;
    cout << "Unesite retke i stupce matrice: ";
    cin >> nRed;
    cin >> nStup;

    // dinamicka alokacija
    niz = new int[nStup];
    matA = new int* [nRed];

    for (i = 0; i < nRed; i++) {
        matA[i] = new int[nStup];
    }
    
    for (i = 0; i < nRed; i++) {
        for (j = 0; j < nStup; j++) {
            matA[i][j] = rand() % 70 - 20;
        }
    }
    ispisMat(matA, nRed, nStup);

    int check;
    check = sumStup(matA, niz, -2, 2);
    if (check != 0) {
        cout << "Greska u funkciji izlazim iz programa\n!";
        system("pause");
        exit(1);

    }
    ispisiNiz(niz, nStup);

    for (i = 0; i < nRed; i++) {
        delete[] matA[i];
    }
    delete[] matA;
    delete[] niz;
    system("pause");
    return 0;
}


