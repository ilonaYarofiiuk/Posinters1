#include <iostream>
#include <ctime>

using namespace std;

int* fillArray(int size);
int* fillArrayWithNegatives(int size);
int* deletNumbers(int* arr, int size, int N, int K);
void printArr(int* arr, int size);
int countNegativeTwoDigit(int* arr, int size);
int* delNegativeTwoDigit(int* arr, int size, int newSize);



int main() {
	//task #4
	int size;
	cout << "Input array size: ";
	cin >> size;
	int* arr = fillArray(size);
	printArr(arr, size);
	int* newArr = deletNumbers(arr, size, 5, 3);
	printArr(newArr, size -3);
	delete arr;

	//task #1
	int size1;
	cout << "Input size:  "; cin >> size1;
	int* arr1 = fillArrayWithNegatives(size1);
	printArr(arr1, size1);
	int newSize = size1 - countNegativeTwoDigit(arr1, size1);
	int* newArr1 = delNegativeTwoDigit(arr1, size1, newSize);
	printArr(newArr1, newSize);
	delete arr1;
	delete newArr1;

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

int* fillArrayWithNegatives(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 51 - 25;
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

void printArr(int* arr, int size)
{
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int countNegativeTwoDigit(int* arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0 && (arr[i] / 100 == 0 && arr[i] / 10 != 0))
			count++;
	}
	return count;
}

int* delNegativeTwoDigit(int* arr, int size, int newSize)
{
	int* newArr = new int[newSize];
	for (int i = 0, j = 0; i < size; i++) {
		if (!(arr[i] < 0 && (arr[i] / 100 == 0 && arr[i] / 10 != 0))) {
			newArr[j] = arr[i];
			j++;
		}	
	}
	return newArr;
}



