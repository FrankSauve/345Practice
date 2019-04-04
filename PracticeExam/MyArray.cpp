#include <iostream>
#include <iterator>
#include "MyArray.h"

using namespace std;

// Default constructor
MyArray::MyArray()
{
	size = 0;
	theArray = NULL;
}

// Consttructor with params
MyArray::MyArray(int arr[], int size) {
	int arrSize = size;
	theArray = new int[arrSize];
	int theArraySize = 0;
	for (int i = 0; i < arrSize; i++) {
		if (!isInArray(arr[i])) {
			theArray[theArraySize] = arr[i];
			theArraySize++;
		}
	}
	size = theArraySize;
}

// Deconstructor
MyArray::~MyArray()
{
	delete [] theArray;
}

// Copy Constructor
MyArray::MyArray(MyArray &mA) : MyArray()
{
	this->theArray = mA.getArray();
	this->size = mA.getSize();
}

// Check if the value is in the array
bool MyArray::isInArray(int value) {
	for (int i = 0; i < size; i++) {
		if (value == theArray[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	cout << "\n--------------------------------------------------\n";
	cout << "---------------PART A---------------";
	cout << "\n--------------------------------------------------\n";

	int arr[] = { 1,2,3,4,5,6,7,6,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	MyArray* myArr = new MyArray(arr, size);

	cout << "\n--------------------------------------------------\n";
	cout << "---------------PART B---------------";
	cout << "\n--------------------------------------------------\n";

	MyArray* copiedArray = new MyArray(*myArr);

	cout << "\n--------------------------------------------------\n";
	cout << "---------------PART C---------------";
	cout << "\n--------------------------------------------------\n";

	int* copiedValues = copiedArray->getArray();
	for (int i = 0; i < copiedArray->getSize(); i++) {
		cout << copiedValues[i] << "\t";
	}
	cout << "\n";

	cout << "\n--------------------------------------------------\n";
	cout << "---------------PART D---------------";
	cout << "\n--------------------------------------------------\n";

	delete copiedArray;

	int x; cin >> x;
	return 0;
}