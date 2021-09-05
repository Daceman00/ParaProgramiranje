// Vj1zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ke alocirajte kvadratnu matricu veli�ine 3x3. 
//Izra�unajte determinantu koriste�i Sarusovo pravilo.
//Pro�irenu matricu i vrijednost determinante ispisati na standardni izlaz

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int dim = 3;
    int **matA, **matB, i, j;

    srand(time(NULL));

    matA = new int* [dim];
    matB = new int* [dim];

    for (int i = 0; i < dim; i++) {
        matA[i] = new int[dim];
        matB[i] = new int[dim + 2]; // Treba nam prosirena matrica

        // Operacija unosa elemenata matrice

        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                matA[i][j] = rand() % 5;

            }
        }

        cout << "\nMatrica B se prosiruje sa 2 prva stupca matrice A...\n";
        for (i = 0; i < dim; i++) {
            for (j = 0; j < dim; j++) {
                matB[i][j] = matA[i][j]; // Kopiramo elemente iz matrice A
                if (j == 0) {
                    matB[1][3] = matA[i][j]; // Dodajemo 1. stupac iz A u 4. stupac iz B
                }
                if (j == 1) {
                    matB[i][4] = matA[i][j]; // Dodajemo 2. stupac iz A u 5. stupac iz B
                }
            }
        }
        cout << "\nIspis matrice:\n";
        for (i = 0; i < dim; i++) {
            cout << endl;
            for (j = 0; j < dim + 2; j++) {
                cout << matB[i][j] << ", ";
            }
        }
        int detPlus = matB[0][0] * matB[1][1] * matB[2][2] + matB[0][1] * matB[1][2] * matB[2][3] + matB[0][2] * matB[1][3] * matB[2][4];
        int detMinus = matB[2][0] * matB[1][1] * matB[0][2] + matB[2][1] * matB[1][2] * matB[0][3] + matB[2][2] * matB[1][3] * matB[0][4];

        cout << "\nDeterminanta iznosi: " << detPlus - detMinus << endl;

        for (int i = 0; i < dim; i++) {
            delete[] matA[i];
        }
        for (int i = 0; i < dim; i++) {
            delete[] matB[i];
        }
        delete[] matA;
        delete[] matB;
    }
    system("PAUSE");
    return 0;
}

