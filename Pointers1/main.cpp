#include <iostream>
#include <ctime>
using namespace std;

int* fillArray(int size);

int main() {
	int size;
	cout << "Input array size: ";
	cin >> size;
	int* arr = fillArray(size);


	delete arr;
	return 0;
}

int* fillArray(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50 + 1;
	}
	return arr;
}
