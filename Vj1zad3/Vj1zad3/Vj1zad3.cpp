// Vj1zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ki alocirati dvije kvadratne matrice. 
//Veli�inu matrice unijeti preko konzole (min 12 elemenata)
//Unijeti elemente preko rand() funkcije i 
//Pomnoziti dvije matrice (element po element)
//Ispisati prvih 10 elemenata po dijagonali matrice
//delalocirati memoriju

#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int **matA, **matB, **matC, n;

    srand(time(NULL));
    cout << "Unesite velicinu kvadratne matrice: " ;
    cin >> n;
    
    if (n < 10) {
        cout << "Velicina matrice mora biti minimalno 10x10" << endl;
        system("PAUSE");
        return 1;
    }

    matA = new int* [n]; // alociramo retke
    for (int i = 0; i < n; i++) {
        matA[i] = new int[n]; // alociramo stupce
    }
    matB = new int* [n]; // alociramo retke
    for (int i = 0; i < n; i++) {
        matB[i] = new int[n]; // alociramo stupce
    }
    matC = new int* [n]; // alociramo retke
    for (int i = 0; i < n; i++) {
        matC[i] = new int[n]; // alociramo stupce
    }
    // Unos elemenata
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matA[i][j] = rand() % 10;
            matB[i][j] = rand() % 10;
        }
    }
    // Mnozenje elemenata dvaju matrica
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matC[i][j] = matA[i][j] * matB[i][j];
        }
    }   
    // Za ispis matrice po dijagonali dovoljna je jedna petlja
    cout << "Ispis matrice A po dijagonali: " << endl;
    for(int i=0;i<10;i++){
        cout << matA[i][i] << ", ";
    }
    cout << "Ispis matrice B po dijagonali: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << matB[i][i] << ", ";
    }
    cout << "Ispis matrice C po dijagonali: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << matC[i][i] << ", ";
    }
    // Dealociranje matrice
    for (int i = 0; i < n; i++) {
        delete[] matA[i];
        delete[] matB[i];
        delete[] matC[i];
    }

    delete[] matA;
    delete[] matB;
    delete[] matC;

    system("PAUSE");
    return 0;

}


