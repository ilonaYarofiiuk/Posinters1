#include <iostream>
#include <ctime>
using namespace std;

int* fillArray(int size);
int* deletNumbers(int* arr, int size, int N, int K);
void printArray(int* arr, int size);

int main() {
	int size;
	cout << "Input array size: ";
	cin >> size;
	int* arr = fillArray(size);
	int* newArr = deletNumbers(arr, size, 5, 3);

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

int* deletNumbers(int* arr, int size, int N, int K)
{
	int newSize = size - K;
	int* newArr = new int[newSize];
	for (int i = 0, j = 0; i < size; i++) {
		if (i >= N && i < N + K) {

		}
		else {
			newArr[j] = arr[i];
			j++;
		}
	}
	return newArr;
}

void printArray(int* arr, int size)
{

}



