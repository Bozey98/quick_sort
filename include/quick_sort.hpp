#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

template <typename Iterator>

void quick_sort(Iterator begin, Iterator end)
{
	Iterator pivot = end - 1;
	Iterator x = end - 1;
	Iterator i = begin;
	while (i <= j)
	{
		while (*i < *pivot)
		{
			++i;
		}
		while (*j > *pivot)
		{
			--j;
		}
		if (i <= j)
		{
			iter_swap(j, i);
			++i;
			--j;
		}
	}
	if (i < end)
		quick_sort(i, end);
	if (begin < j)
		quick_sort(begin, j + 1);
}

/*int main()
{
	vector <int> test;
	for (int i = 0; i < 10; i++) {
		test.push_back(rand() % 100);
		cout << test[i] << "  ";
	}

	cout << endl;

	quick_sort(test.begin(), test.end());

	for (int i = 0; i < 10; i++) {
		cout << test[i] << "  ";
	}

	system("pause");
	return 0;
}*/
