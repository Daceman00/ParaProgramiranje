// Vj1zad7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dinami�ke alocirajte kvadratnu matricu u obliku niza
//Prona�i element sa najve�om vrijednosti. Odrediti poziciju
// u matrici i poziciju u nizu.
// Zadatak rije�ite na dva na�ina. Kori�tenjem jedne i dvije for petlje
//Rezultat i pozicije ispisati na ekran

#include <iostream>
using namespace std;

int main() {
	int dim;
	int* ma, i, j;

	cout << "Unesite dimenzije matrice: ";
	cin >> dim;

	ma = new int[dim * dim];

	printf("Unesite elemente matrice->");
	for (i = 0; i < dim; i++)
		for (j = 0; j < dim; j++)
			ma[i * dim + j] = rand() % 100;

	int max = ma[0];             //pretpostavimo da je maksimum prvi element
	int x, y, poz;

	// Pronala�nje minimuma preko dviju petlji 
	/* for(i=0;i<dim;i++)
		 for(int j=0;j<dim;j++)
		  {
			  if(max<ma[i*dim+j])
				  {max=ma[i*dim+j];
				  x=i;
				  y=j;
				  poz=i*dim+j;
					}
		  }
			*/
			// Pronala�nje minimuma preko jedne petlji
	for (i = 1; i < dim * dim; i++)
		if (max < ma[i]) {
			max = ma[i];
			x = i / dim;
			y = i % dim;
			poz = i;
		}

	cout << "\nIspis matrice:\n";
	for (i = 0; i < dim; i++) {
		cout << "\n";
		for (j = 0; j < dim; j++)
			cout << ma[i * dim + j] << " ";
	}

	cout << "\n\nMaksimum je " << max;
	cout << "\nPozicija u matrici je x=" << x + 1 << ",y=" << y + 1;
	cout << "\nPozicija u nizu " << poz + 1 << endl;

	delete[] ma;

	system("Pause");

	return 0;
}

