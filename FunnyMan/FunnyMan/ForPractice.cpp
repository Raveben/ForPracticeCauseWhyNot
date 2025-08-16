#include <iostream>
#include "ForPractice.h"
#include <string>
using namespace std;

int main() {
	// sum_of_numbers();
	// print_multiplication_table();
	// countdown();
	// factorial_calculation();
	// all_even_number();
	// fibonacci();
	// reverse_a_string();
	prime_number();
}


void sum_of_numbers() {
	int nombre;
	cout << "Entrer un nombre: ";
	cin >> nombre;
	int sum = 0;
	for (int i = 1; i <= nombre; i++) {
		sum += i;
	}
	cout << "La somme est: " << sum;
}

void print_multiplication_table() {
	int nombre;
	cout << "Entrez un nombre: ";
	cin >> nombre;
	cout << "Voici la table de multiplication: \n";
	for (int i = 1; i <= 10; i++) {

		int multiplication = nombre * i;
		cout << nombre << " x " << i << " = " << multiplication << "\n";
	}

}

void countdown() {
	int startingNumber;
	cout << "Entrez un nombre: ";
	cin >> startingNumber;
	for (int i = startingNumber; i >= 1; i--)
	{
		cout << i  << "\n";
	}
	cout << "Go !";
}

void factorial_calculation() {
	int nombre;
	cout << "Entrez un nombre: ";
	cin >> nombre;
	int accumule = 1;
	for (int i = 1; i <= nombre ; i++) {
	
		accumule *= i;
	}
	cout << nombre << "! = " << accumule << endl;
}

void all_even_number() {
	int debut;
	int fin;
	cout << "debut: ";
	cin >> debut;
	cout << "\nfin: ";
	cin >> fin;

	for (int i = debut; i <= fin; i++) {

		if (i % 2 == 0) {
			cout << i << "\n";
		}

	}
}

void fibonacci() {
	int nombre;
	cout << "Entrez un nombre: ";
	cin >> nombre;
	int a = 0;
	int b = 1;
	int c;
	for (int i = 0; i <= nombre; i++) {
		c = a + b;
		a = b;
		b = c;
		cout << c << "\n";
	}


}


void reverse_a_string() {
	string phrase;
	cout << "Entrer un mot: ";
	getline(cin, phrase);
	for (int i = phrase.size() - 1; i >= 0; i--) {
		cout << phrase.at(i);
	}

}

void prime_number() {
	int limit;
	cout << "Entrez un nombre: ";
	cin >> limit;

	cout << "Les nombres premiers jusqu'à " << limit << " sont : ";

	for (int num = 2; num <= limit; num++) {
		bool isPrime = true;


		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				isPrime = false;
				break; 
			}
		}

		if (isPrime) {
			cout << num << " ";
		}
	}
	cout << endl;
}