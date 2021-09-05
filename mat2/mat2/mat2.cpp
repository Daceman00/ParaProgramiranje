// mat2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ki locirajte  dvije kvadratne matricu . 
//unesite veriendosti preko rand() u rasponu od -15  do 35
//Napi�ite funkciju za transponiranje matrice
//Reszultat ispisati na ekran

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

    for (j = 0; j < nRed; j++) {
        niz[j] = 0;
        for (i = 0; i < nStup; i++) {
            niz[j] = niz[j] + mat[i][j];
        }
    }
    return 0;
}

void transponiraj(int** mat, int** matTrans, int nRed, int nStup) {
    int i, j;
    for (i = 0; i < nRed; i++) {
        for (j = 0; j < nStup; j++) {
            matTrans[j][i] = mat[i][j];
        }
    }
}

int main()
{
    int** matA, ** matB, i, j, nRed, nStup;
    int* niz;

    cout << "Unesite retke i stupce matrice";
    cin >> nRed;
    cin >> nStup;
    
    // kod transponirane matrice ide zamjena stupaca sa redcima
    int redTrans = nStup;
    int stupTrans = nRed;

    // dinamicka alokacija
    matA = new int* [nRed];
    matB = new int* [redTrans];

    for (i = 0; i < nRed; i++) {
        matA[i] = new int[nStup];
    }
    for (i = 0; i < redTrans; i++) {
        matB[i] = new int[stupTrans];
    }
    for (i = 0; i < nRed; i++) {
        for (j = 0; j < nStup; j++) {
            matA[i][j] = rand() % 70 - 20;
        }
    }
    ispisMat(matA, nRed, nStup);
    transponiraj(matA, matB, nRed, nStup);

    cout << "\n\n";
    ispisMat(matB, redTrans, stupTrans);

    for (i = 0; i < nRed; i++) {
        delete[] matA[i];
    }
    for (j = 0; j < redTrans; j++) {
        delete[] matB[i];
    }
    delete[] matA;
    delete[] matB;

    system("pause");
    return 0;
}

