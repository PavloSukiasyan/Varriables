//============================================================================
// Name        : Varriables.cpp
// Author      : Pavlo Sukiasyan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 7;
	int numberDogs = 9;
	int numberAnimals = numberCats + numberDogs;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of Dogs: " << numberDogs << endl;

	cout << "Total: " << numberAnimals << endl;

	cout << "New dog added " << endl;
	numberDogs = numberDogs + 1;
	cout <<"New number of Dogs: " << numberDogs << endl;
	return 0;
}
