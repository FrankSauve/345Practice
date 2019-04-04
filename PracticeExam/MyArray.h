#pragma once
class MyArray
{
private:
	int* theArray;
	int size;
public:
	MyArray();
	MyArray(int arr[], int size);
	MyArray::MyArray(MyArray &mA);
	~MyArray();
	bool isInArray(int value);
	int * getArray() { return theArray; }
	int getSize() { return size; }
};

