#include <iostream>
#include <ctime>
using namespace std;

int* fillArray(int size);
int* deleteNumbers(int* arr, int size, int N, int K);
void printArr(int* arr, int size);

int main()
{
	int size;
	cout << "Intput arrary size: ";
	cin >> size;
	int* arr = fillArray(size);
	printArr(arr, size);
	int* newArr = deleteNumbers(arr, size, 5, 3);
	printArr(newArr, size - 3);
	delete arr;
	return 0;
}

int* fillArray(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50 + 1;
	}
	return arr;
}

int* deleteNumbers(int* arr, int size, int N, int K)
{
	int newSize = size - K;
	int* newArr = new int[newSize];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i >= N && i <= N + K)
		{

		}
		else
		{
			newArr[j] = arr[i];
			j++;
		}
	}
	return nullptr;
}

void printArr(int* arr, int size)
{
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
