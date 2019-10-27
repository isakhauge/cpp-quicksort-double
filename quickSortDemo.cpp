#include <iostream>
#include <string>
#include "quicksort.cpp"

#define N 10
static double demo_double[N] = {6.0, 4.0, 1.0, 10.1, 20.0, 5.5, 31.2, 9.9, 0, 3.3};
static double demo_integer[N] = {6, 4, 1, 10, 20, 5, 31, 9, 0, 3};

void print(double arr[], int length) {
	std::string separator;
	std::cout << "[";
	for (int i=0; i<length; i++)
		std::cout << ((i==0) ? "" : ", ") << arr[i];
	std::cout << "]\n";
}

void startDemo() {
	std::cout << "BEFORE QUICK SORT: \n";
	std::cout << "Integer array: ";
	print(demo_integer, N);
	std::cout << "Double array: ";
	print(demo_double, N);

	ikh::quickSort(demo_integer, 0, N, N);
	ikh::quickSort(demo_double, 0, N, N);

	std::cout << "\nAFTER QUICK SORT: \n";
	std::cout << "Integer array: ";
	print(demo_integer, N);
	std::cout << "Double array: ";
	print(demo_double, N);
}

int main() {
	startDemo();
	return 0;
}