#include <iostream>
#include "quicksort.h"

#define N 10
static double demo[N] = {6.0,4.0,1.0,10.1,20.0,5.5,31.2,9.9,0,3.3};

using namespace std;

void print(double arr[], int length) {
	std::string separator = "";
	std::cout << "[";
	for (int i=0; i<length; i++)
		std::cout << ((i==0) ? "" : ", ") << arr[i];
	std::cout << "]\n";
}

void startDemo() {
	std::cout << "Before sort: ";
	print(demo,N);
	ikh::quickSort(demo, 0, N, N);
	std::cout << "After sort: ";
	print(demo,N);
}

int main() {
	startDemo();
	return 0;
}