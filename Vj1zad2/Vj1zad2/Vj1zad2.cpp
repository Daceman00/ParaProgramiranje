// Vj1zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Dinami�ki alocirati niz. Veli�inu niza unijeti preko konzole
// Sortirati elemente niza
// Ispisati prvih 10 elemenata  sortiranog niza

#include <iostream>
#include <time.h>
using namespace std;


int main()
{	
	// Deklariraj niz
	int* nizA, n;

	srand(time(NULL));

	cout << "Unesite broj elemenatat niza: " << endl;
	cin >> n;

	if (n < 10) {
		cout << "Dimenzije niza moraju biti minimalno 10" << endl;
		system("PAUSE");
		return 1;

	}
	// Dinamicki alociraj niz
	nizA = new int[n];

	// Unosenje velicine niza preko konzole
	for (int i = 0; i < n; i++) {
		nizA[i] = rand() % 50;
	}
	cout << "niz:" << endl;
	for (int i = 0; i < n; i++) {
		cout << nizA[i] << " ";
	}

	int pom;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nizA[i] > nizA[j]) {
				pom = nizA[i];
				nizA[i] = nizA[i];
				nizA[j] = pom;
			}
		}
	}

	cout << "Ispis sortiranog niza: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << nizA[i] << " ";
	}

	delete[] nizA;

	cout << endl;
	system("PAUSE");
	return 0;
}

