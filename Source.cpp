#include "Header.h"

int main()
{
	

	srand(time(NULL)); //create rand seed
	int range = getSize(); //get size of array
	int *p = createArray(range); //sets pointer to the dyanmic array
	sortArray(p, range); //sorts array
	displayArray(p, range); //diaplays array
	for (int i = 0; i < 3; i++) //asks for 3 numbers to find within set, tells whether they are or not
	{
		int check = getInteger(); 
		bool found = search(p, range, check); 
		if (found)
			cout << check << " is in the set of numbers" << endl;
		else
			cout << check << " is not in the set" << endl;
	}
	delete [] p; //clears memory from heap
	return 0;
}