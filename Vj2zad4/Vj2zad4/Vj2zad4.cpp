// Vj2zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ki alocirati niz od 1 000 000 elemenata
//Koriste�i multithreading u C++ paralelizirati
// i prona�i minimum tog niza

#include <iostream>
#include <thread>
#include <ctime>
using namespace std;

void minFunc(int* niz, int N, int* rez) {
    int min;
    min = niz[0];
    for (int i = 0; i < N; i++) {
        if (min > niz[i]) {
            min = niz[i];
        }
        *rez = min;
    }
}

int main()
{
    int N = 1000;
    int *niz, min, rez;
    thread t;

    srand(time(NULL));
    // alokacija
    niz = new int[N];

    // Dodijeljivanje vrijednosti
    for (int i = 0; i < N; i++) {
        niz[i] = rand();
    }
    t = thread(minFunc, niz, N, &rez);
    t.join();

    min = rez;

    cout << "\nMinimum jeste: " << rez << endl;

    //dealokacija
    delete[] niz;
    system("PAUSE");
    return 0;


        
}

