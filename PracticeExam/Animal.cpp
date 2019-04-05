#include <iostream>
#include <string>
#include "Animal.h"
#include "Duck.h"
#include "Cat.h"
#include "Beaver.h"
#include "Platypus.h"

using namespace std;


int main() {
	Animal** animals = new Animal*[4];
	animals[0] = new Duck;
	animals[1] = new Beaver;
	animals[2] = new Cat;
	animals[3] = new Platypus;

	for (int i = 0; i < 4; i++) {
		cout << animals[i]->talk();
	}

	cin.get();
	return 0;
}