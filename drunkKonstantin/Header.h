
#include <iostream>

using namespace std;

template<typename f>

int lineSearch(f* arr, int size, f element)
{
	for (int i = 0; i < size; i++)
	{
		if (arrr[i] == element)
			return i;
	}
	return -1;
}