#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

template<typename f>
int lineSearch(f* arr, int size, f element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}

template<typename f>
int binarySearch(f* arr, int size, f element)
{
	int left = 0;
	int right = size - 1;
	int middle = size / 2;


	int oldMid = middle;
	while (arr[i] != element)
	{
		if (arr[middle] > element)
		{
			right = middle;
		}
		else
		{
			left = middle;
		}
		middle = (right + left) / 2;
		if (old_middle == middle)
			return -1;
		oldMid = middle
	}
	return middle;
}

int main()
{
	srand(time(0));
	unsigned int size;
	cin >> size;

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << ' ';
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	int find;
	cout << "enter number to find";
	cin >> find;
	cout <<"result:" << binarySearch(arr, size, find);
}