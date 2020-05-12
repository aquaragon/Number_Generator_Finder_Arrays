#include "Header.h"

int getSize() //returns size of array
{
	int value;
	cout << "Enter value between 10 and 20:" << endl;
	do
	{
		cin >> value;
		
		if (cin.fail() || value < 10 || value > 20)
		{
			cout << "Invalid entry, please try again\n";
			cin.clear();
			cin.ignore(LARGE, END_LINE);
		}

	} while (value < 10 || value > 20);
	
	return value;
}

int * createArray(int length) //should return pointer to array
{
	int *arr = new int[length]; //sets array to the size the user inputted
	for (int i = 0; i < length; i++) //assigns random numbers to each element of array
		*(arr + i) = rand() % RAND_NUM; 
	return arr;
}

void sortArray(int *p, int length) //sorts array using selection
{
	int temp;
	for (int i = 0; i < length - 1; i++)
	{
		int small = i;
		for (int j = i + 1; j < length; j++)
		{
			if (*(p + j) < *(p + small))
				small = j;
		}

		if (i != small)
		{
			temp = *(p + i);
			*(p + i) = *(p + small);
			*(p + small) = temp;
		}

	}
		
}

void displayArray(int *p, int length) //displays array in rows of 5
{
	for (int i = 0; i < length; i++)
	{
		cout << left << setw(4) << *(p + i);
		if (i % 5 == 4)
			cout << endl;
	}
	cout << endl;
}

int getInteger() //returns value that user would like searched
{
	int value;
	cout << "Enter value between 0 and 99:" << endl;
	cin >> value;
	while (value < 0 || (value > RAND_NUM - 1))
	{
		cout << "Invalid number, Please try again" << endl;
		cin >> value;
	}
	return value;
}

bool search(int *p, int length, int value) //reurns true or false if value was in the set
{
	int first = 0,
		last = length - 1,
		mid;
	while (first <= last)
	{
		mid = first + (last - first + 1) / 2;
		if (*(p + mid) == value)
			return true;
		else if (*(p + mid) > value)
			last = mid - 1;
		else
			first = mid + 1;

	}
	return false;
}