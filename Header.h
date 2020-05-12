#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

int const RAND_NUM = 100;

const int LARGE = numeric_limits<streamsize>::max();
const char END_LINE = '\n';

int getSize(); //gets size of array
int *createArray(int length); //creates a pointer to a dynamically sized array
void sortArray(int *p, int length); //sorts array with selection
void displayArray(int *p, int length); //displays array
int getInteger(); //gets integer to find in array
bool search(int *p, int length, int value); //searchs array for the integer inputted
