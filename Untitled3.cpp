#include <iostream>
using namespace std;

template<typename T>
void InsertionSort(T list[], int size)
{
	for (int i = 1; i < size; i++)
	{
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}
		list[k + 1] = currentElement;
	}

}
template<typename T>
T BinarySearch(const T list[], T key, int size)
{
	int low = 0;
	int high = size - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{

	int list[] = { 1,5,6,2,3,7,9,8,4 };

	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	cout << "From: ";

	for (int i = 0; i < 9; i++)
	{
		cout << list[i];
		if (i < 8)
			cout << ",";
	}

	cout << endl << "To: ";

	InsertionSort(list, 9);

	for (int i = 0; i < 9; i++)
	{
		cout << list[i];
		if (i < 8)
			cout << ",";
	}
	cout << endl;

	int i = BinarySearch(list, num1, 9);
	int j = BinarySearch(list, num2, 9);
	int k = BinarySearch(list, num3, 9);

	cout << num1 << "at" << i << endl;
	cout << num2 << "at" << j << endl;
	cout << num3 << "at" << k << endl;

	double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
	double num4, num5, num6;

	cin >> num4 >> num5 >> num6;

	cout << "From: ";

	for (int i = 0; i < 9; i++)
	{
		cout << list2[i];
		if (i < 8)
			cout << ",";
	}

	cout << endl << "To: ";

	InsertionSort(list2, 9);

	for (int i = 0; i < 9; i++)
	{
		cout << list2[i];
		if (i < 8)
			cout << ",";
	}
	cout << endl;

	double p = BinarySearch(list2, num4, 9);
	double q = BinarySearch(list2, num5, 9);
	double r = BinarySearch(list2, num6, 9);

	cout << num4 << "at" << p << endl;
	cout << num5 << "at" << q << endl;
	cout << num6 << "at" << r << endl;

}
